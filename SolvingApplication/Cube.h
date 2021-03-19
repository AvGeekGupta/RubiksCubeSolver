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
					this->temporaryFace[i, j] = INVALID;
				}
			}
		}

		System::Void getFace(int face_id, array<System::Int32, 2>^ face) {
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
			movement(movement const% object) {
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
		/// Moves the desired face in the given direction for given angle.
		/// </summary>
		/// <param name="moveFace"></param>
		/// <returns></returns>
		System::Void move(ref struct movement moveFace) {
			if (moveFace.direction == L"Left") {
				
			}
			else {
				
			}
			if (moveFace.degree == FULL_ROTATION) {
				moveFace.degree -= FULL_ROTATION;
				this->move(moveFace);
			}
		}
};
