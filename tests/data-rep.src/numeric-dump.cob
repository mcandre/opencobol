       IDENTIFICATION   DIVISION.
       PROGRAM-ID.      prog.
       DATA             DIVISION.
       WORKING-STORAGE  SECTION.
       01 G-1.
         02 X-1         PIC 9(1) VALUE 1
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-2.
         02 X-2         PIC 9(2) VALUE 12
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-3.
         02 X-3         PIC 9(3) VALUE 123
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-4.
         02 X-4         PIC 9(4) VALUE 1234
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-5.
         02 X-5         PIC 9(5) VALUE 12345
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-6.
         02 X-6	        PIC 9(6) VALUE 123456
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-7.
         02 X-7         PIC 9(7) VALUE 1234567
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-8.
         02 X-8         PIC 9(8) VALUE 12345678
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-9.
         02 X-9         PIC 9(9) VALUE 123456789
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-10.
         02 X-10        PIC 9(10) VALUE 1234567890
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-11.
         02 X-11        PIC 9(11) VALUE 12345678901
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-12.
         02 X-12        PIC 9(12) VALUE 123456789012
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-13.
         02 X-13        PIC 9(13) VALUE 1234567890123
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-14.
         02 X-14        PIC 9(14) VALUE 12345678901234
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-15.
         02 X-15        PIC 9(15) VALUE 123456789012345
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-16.
         02 X-16        PIC 9(16) VALUE 1234567890123456
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-17.
         02 X-17        PIC 9(17) VALUE 12345678901234567
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-18.
         02 X-18        PIC 9(18) VALUE 123456789012345678
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S1.
         02 X-S1        PIC S9(1) VALUE -1
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S2.
         02 X-S2        PIC S9(2) VALUE -12
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S3.
         02 X-S3        PIC S9(3) VALUE -123
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S4.
         02 X-S4        PIC S9(4) VALUE -1234
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S5.
         02 X-S5        PIC S9(5) VALUE -12345
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S6.
         02 X-S6        PIC S9(6) VALUE -123456
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S7.
         02 X-S7        PIC S9(7) VALUE -1234567
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S8.
         02 X-S8        PIC S9(8) VALUE -12345678
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S9.
         02 X-S9        PIC S9(9) VALUE -123456789
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S10.
         02 X-S10       PIC S9(10) VALUE -1234567890
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S11.
         02 X-S11       PIC S9(11) VALUE -12345678901
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S12.
         02 X-S12       PIC S9(12) VALUE -123456789012
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S13.
         02 X-S13       PIC S9(13) VALUE -1234567890123
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S14.
         02 X-S14       PIC S9(14) VALUE -12345678901234
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S15.
         02 X-S15       PIC S9(15) VALUE -123456789012345
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S16.
         02 X-S16       PIC S9(16) VALUE -1234567890123456
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S17.
         02 X-S17       PIC S9(17) VALUE -12345678901234567
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       01 G-S18.
         02 X-S18       PIC S9(18) VALUE -123456789012345678
                        @USAGE@.
         02 FILLER      PIC X(18) VALUE SPACE.
       PROCEDURE        DIVISION.
      * dump each values
           CALL "dump" USING G-1.
           CALL "dump" USING G-2.
           CALL "dump" USING G-3.
           CALL "dump" USING G-4.
           CALL "dump" USING G-5.
           CALL "dump" USING G-6.
           CALL "dump" USING G-7.
           CALL "dump" USING G-8.
           CALL "dump" USING G-9.
           CALL "dump" USING G-10.
           CALL "dump" USING G-11.
           CALL "dump" USING G-12.
           CALL "dump" USING G-13.
           CALL "dump" USING G-14.
           CALL "dump" USING G-15.
           CALL "dump" USING G-16.
           CALL "dump" USING G-17.
           CALL "dump" USING G-18.
           CALL "dump" USING G-S1.
           CALL "dump" USING G-S2.
           CALL "dump" USING G-S3.
           CALL "dump" USING G-S4.
           CALL "dump" USING G-S5.
           CALL "dump" USING G-S6.
           CALL "dump" USING G-S7.
           CALL "dump" USING G-S8.
           CALL "dump" USING G-S9.
           CALL "dump" USING G-S10.
           CALL "dump" USING G-S11.
           CALL "dump" USING G-S12.
           CALL "dump" USING G-S13.
           CALL "dump" USING G-S14.
           CALL "dump" USING G-S15.
           CALL "dump" USING G-S16.
           CALL "dump" USING G-S17.
           CALL "dump" USING G-S18.
           INITIALIZE X-1.    CALL "dump" USING G-1.
           INITIALIZE X-2.    CALL "dump" USING G-2.
           INITIALIZE X-3.    CALL "dump" USING G-3.
           INITIALIZE X-4.    CALL "dump" USING G-4.
           INITIALIZE X-5.    CALL "dump" USING G-5.
           INITIALIZE X-6.    CALL "dump" USING G-6.
           INITIALIZE X-7.    CALL "dump" USING G-7.
           INITIALIZE X-8.    CALL "dump" USING G-8.
           INITIALIZE X-9.    CALL "dump" USING G-9.
           INITIALIZE X-10.   CALL "dump" USING G-10.
           INITIALIZE X-11.   CALL "dump" USING G-11.
           INITIALIZE X-12.   CALL "dump" USING G-12.
           INITIALIZE X-13.   CALL "dump" USING G-13.
           INITIALIZE X-14.   CALL "dump" USING G-14.
           INITIALIZE X-15.   CALL "dump" USING G-15.
           INITIALIZE X-16.   CALL "dump" USING G-16.
           INITIALIZE X-17.   CALL "dump" USING G-17.
           INITIALIZE X-18.   CALL "dump" USING G-18.
           INITIALIZE X-S1.   CALL "dump" USING G-S1.
           INITIALIZE X-S2.   CALL "dump" USING G-S2.
           INITIALIZE X-S3.   CALL "dump" USING G-S3.
           INITIALIZE X-S4.   CALL "dump" USING G-S4.
           INITIALIZE X-S5.   CALL "dump" USING G-S5.
           INITIALIZE X-S6.   CALL "dump" USING G-S6.
           INITIALIZE X-S7.   CALL "dump" USING G-S7.
           INITIALIZE X-S8.   CALL "dump" USING G-S8.
           INITIALIZE X-S9.   CALL "dump" USING G-S9.
           INITIALIZE X-S10.  CALL "dump" USING G-S10.
           INITIALIZE X-S11.  CALL "dump" USING G-S11.
           INITIALIZE X-S12.  CALL "dump" USING G-S12.
           INITIALIZE X-S13.  CALL "dump" USING G-S13.
           INITIALIZE X-S14.  CALL "dump" USING G-S14.
           INITIALIZE X-S15.  CALL "dump" USING G-S15.
           INITIALIZE X-S16.  CALL "dump" USING G-S16.
           INITIALIZE X-S17.  CALL "dump" USING G-S17.
           INITIALIZE X-S18.  CALL "dump" USING G-S18.
           MOVE ZERO TO X-1.    CALL "dump" USING G-1.
           MOVE ZERO TO X-2.    CALL "dump" USING G-2.
           MOVE ZERO TO X-3.    CALL "dump" USING G-3.
           MOVE ZERO TO X-4.    CALL "dump" USING G-4.
           MOVE ZERO TO X-5.    CALL "dump" USING G-5.
           MOVE ZERO TO X-6.    CALL "dump" USING G-6.
           MOVE ZERO TO X-7.    CALL "dump" USING G-7.
           MOVE ZERO TO X-8.    CALL "dump" USING G-8.
           MOVE ZERO TO X-9.    CALL "dump" USING G-9.
           MOVE ZERO TO X-10.   CALL "dump" USING G-10.
           MOVE ZERO TO X-11.   CALL "dump" USING G-11.
           MOVE ZERO TO X-12.   CALL "dump" USING G-12.
           MOVE ZERO TO X-13.   CALL "dump" USING G-13.
           MOVE ZERO TO X-14.   CALL "dump" USING G-14.
           MOVE ZERO TO X-15.   CALL "dump" USING G-15.
           MOVE ZERO TO X-16.   CALL "dump" USING G-16.
           MOVE ZERO TO X-17.   CALL "dump" USING G-17.
           MOVE ZERO TO X-18.   CALL "dump" USING G-18.
           MOVE ZERO TO X-S1.   CALL "dump" USING G-S1.
           MOVE ZERO TO X-S2.   CALL "dump" USING G-S2.
           MOVE ZERO TO X-S3.   CALL "dump" USING G-S3.
           MOVE ZERO TO X-S4.   CALL "dump" USING G-S4.
           MOVE ZERO TO X-S5.   CALL "dump" USING G-S5.
           MOVE ZERO TO X-S6.   CALL "dump" USING G-S6.
           MOVE ZERO TO X-S7.   CALL "dump" USING G-S7.
           MOVE ZERO TO X-S8.   CALL "dump" USING G-S8.
           MOVE ZERO TO X-S9.   CALL "dump" USING G-S9.
           MOVE ZERO TO X-S10.  CALL "dump" USING G-S10.
           MOVE ZERO TO X-S11.  CALL "dump" USING G-S11.
           MOVE ZERO TO X-S12.  CALL "dump" USING G-S12.
           MOVE ZERO TO X-S13.  CALL "dump" USING G-S13.
           MOVE ZERO TO X-S14.  CALL "dump" USING G-S14.
           MOVE ZERO TO X-S15.  CALL "dump" USING G-S15.
           MOVE ZERO TO X-S16.  CALL "dump" USING G-S16.
           MOVE ZERO TO X-S17.  CALL "dump" USING G-S17.
           MOVE ZERO TO X-S18.  CALL "dump" USING G-S18.
           STOP RUN.
