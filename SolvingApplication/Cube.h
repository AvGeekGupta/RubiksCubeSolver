#pragma once

// Faces of Rubik's Cube
constexpr auto RED = 0;
constexpr auto BLUE = 1;
constexpr auto YELLOW = 2;
constexpr auto GREEN = 3;
constexpr auto WHITE = 4;
constexpr auto ORANGE = 5;

// Angle of rotation
constexpr auto HALF_ROTATION = 90;
constexpr auto FULL_ROTATION = 180;

// No. of faces
constexpr auto FACES = 6;

// Size of cube
constexpr auto GRID_SIZE = 3;

constexpr auto INVALID = -1;

/// <summary>
/// Class Cube : All functions of cude
/// </summary>
ref class Cube{
	public:
		/// <summary>
		/// Constructor: Initialises all the variables of the class.
		/// </summary>
		Cube() {
			for (int i = 0; i < FACES; i++) {
				for (int j = 0; j < GRID_SIZE; j++) {
					for (int k = 0; k < GRID_SIZE; k++) {
						this->cube[i, j, k] = INVALID;
					}
				}
			}
		}
		/// <summary>
		/// 
		/// </summary>
		ref struct movement {
			movement() {
				degree = 0;
				face = INVALID;
				direction = L"INVALID";
			}
			movement::movement(movement const% object) {
				degree = object.degree;
				face = object.face;
				direction = object.direction;
			}
			int degree, face;
			System::String^ direction;
		};
	private:
		array<System::Int32, 3>^ cube = gcnew array<System::Int32, 3>(FACES, GRID_SIZE, GRID_SIZE);
		array<System::Int32, 2>^ temporaryFace = gcnew array<System::Int32, 2>(GRID_SIZE, GRID_SIZE);
		/// <summary>
		/// Copies one face to another.
		/// </summary>
		/// <param name="face_1"></param>
		/// <param name="face_2"></param>
		/// <returns></returns>
		System::Void copyFace(array<System::Int32, 2>^ face_1, array<System::Int32, 2>^ face_2) {

		}
		/// <summary>
		/// Moves the desired face in the given direction for given angle.
		/// </summary>
		/// <param name="moveFace"></param>
		/// <returns></returns>
		System::Void move(ref struct movement moveFace) {
			if (moveFace.direction == L"Left") {
				this->turnLeft(moveFace.face);
			}
			else {
				this->turnRight(moveFace.face);
			}
			if (moveFace.degree == FULL_ROTATION) {
				moveFace.degree -= FULL_ROTATION;
				this->move(moveFace);
			}
		}
		/// <summary>
		/// Turns the given face of rubik'c cube Left.
		/// </summary>
		/// <param name="face"></param>
		/// <returns></returns>
		System::Void turnLeft(int face) {

		}
		/// <summary>
		/// Turns the given face of rubik'c cube Right.
		/// </summary>
		/// <param name="face"></param>
		/// <returns></returns>
		System::Void turnRight(int face) {

		}
};
