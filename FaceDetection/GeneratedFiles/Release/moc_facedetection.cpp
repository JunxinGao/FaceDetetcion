/****************************************************************************
** Meta object code from reading C++ file 'facedetection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../facedetection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facedetection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FaceDetection_t {
    QByteArrayData data[81];
    char stringdata0[911];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaceDetection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaceDetection_t qt_meta_stringdata_FaceDetection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FaceDetection"
QT_MOC_LITERAL(1, 14, 9), // "file_open"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "close_left"
QT_MOC_LITERAL(4, 36, 14), // "is_fast_detect"
QT_MOC_LITERAL(5, 51, 7), // "diffAdj"
QT_MOC_LITERAL(6, 59, 9), // "muti_open"
QT_MOC_LITERAL(7, 69, 17), // "cascade_file_load"
QT_MOC_LITERAL(8, 87, 23), // "nestedCascade_file_load"
QT_MOC_LITERAL(9, 111, 11), // "save_dialog"
QT_MOC_LITERAL(10, 123, 12), // "muti_process"
QT_MOC_LITERAL(11, 136, 11), // "stopProcess"
QT_MOC_LITERAL(12, 148, 11), // "img_process"
QT_MOC_LITERAL(13, 160, 11), // "updateImage"
QT_MOC_LITERAL(14, 172, 12), // "scaledQimage"
QT_MOC_LITERAL(15, 185, 3), // "src"
QT_MOC_LITERAL(16, 189, 13), // "detectAndDraw"
QT_MOC_LITERAL(17, 203, 8), // "cv::Mat&"
QT_MOC_LITERAL(18, 212, 3), // "img"
QT_MOC_LITERAL(19, 216, 10), // "getROIRect"
QT_MOC_LITERAL(20, 227, 21), // "std::vector<cv::Rect>"
QT_MOC_LITERAL(21, 249, 36), // "std::vector<std::vector<cv::P..."
QT_MOC_LITERAL(22, 286, 8), // "contours"
QT_MOC_LITERAL(23, 295, 7), // "cv::Mat"
QT_MOC_LITERAL(24, 303, 4), // "gray"
QT_MOC_LITERAL(25, 308, 13), // "origin_detect"
QT_MOC_LITERAL(26, 322, 9), // "rectScale"
QT_MOC_LITERAL(27, 332, 8), // "cv::Rect"
QT_MOC_LITERAL(28, 341, 1), // "r"
QT_MOC_LITERAL(29, 343, 6), // "mosaic"
QT_MOC_LITERAL(30, 350, 7), // "faceOrg"
QT_MOC_LITERAL(31, 358, 5), // "sleep"
QT_MOC_LITERAL(32, 364, 5), // "msecs"
QT_MOC_LITERAL(33, 370, 12), // "getFrameRate"
QT_MOC_LITERAL(34, 383, 12), // "getFrameSize"
QT_MOC_LITERAL(35, 396, 8), // "cv::Size"
QT_MOC_LITERAL(36, 405, 14), // "getFrameNumber"
QT_MOC_LITERAL(37, 420, 14), // "getFrameCounts"
QT_MOC_LITERAL(38, 435, 11), // "getTempFile"
QT_MOC_LITERAL(39, 447, 12), // "std::string&"
QT_MOC_LITERAL(40, 460, 3), // "str"
QT_MOC_LITERAL(41, 464, 14), // "getCurTempFile"
QT_MOC_LITERAL(42, 479, 9), // "setOutput"
QT_MOC_LITERAL(43, 489, 11), // "std::string"
QT_MOC_LITERAL(44, 501, 8), // "filename"
QT_MOC_LITERAL(45, 510, 10), // "createTemp"
QT_MOC_LITERAL(46, 521, 9), // "framerate"
QT_MOC_LITERAL(47, 531, 7), // "isColor"
QT_MOC_LITERAL(48, 539, 8), // "getCodec"
QT_MOC_LITERAL(49, 548, 6), // "char[]"
QT_MOC_LITERAL(50, 555, 5), // "codec"
QT_MOC_LITERAL(51, 561, 12), // "get_contours"
QT_MOC_LITERAL(52, 574, 5), // "image"
QT_MOC_LITERAL(53, 580, 9), // "bgfg_segm"
QT_MOC_LITERAL(54, 590, 4), // "img0"
QT_MOC_LITERAL(55, 595, 9), // "frame_num"
QT_MOC_LITERAL(56, 605, 16), // "process_contours"
QT_MOC_LITERAL(57, 622, 16), // "find_maxcontours"
QT_MOC_LITERAL(58, 639, 9), // "op_dialog"
QT_MOC_LITERAL(59, 649, 11), // "help_dialog"
QT_MOC_LITERAL(60, 661, 6), // "bg_sub"
QT_MOC_LITERAL(61, 668, 15), // "contrast_bright"
QT_MOC_LITERAL(62, 684, 11), // "turn_on_rec"
QT_MOC_LITERAL(63, 696, 12), // "turn_off_rec"
QT_MOC_LITERAL(64, 709, 15), // "train_file_open"
QT_MOC_LITERAL(65, 725, 10), // "getPredict"
QT_MOC_LITERAL(66, 736, 12), // "saveFacesDir"
QT_MOC_LITERAL(67, 749, 11), // "camera_save"
QT_MOC_LITERAL(68, 761, 11), // "clearScreen"
QT_MOC_LITERAL(69, 773, 9), // "autoTrain"
QT_MOC_LITERAL(70, 783, 12), // "get_filelist"
QT_MOC_LITERAL(71, 796, 14), // "vector<string>"
QT_MOC_LITERAL(72, 811, 5), // "char*"
QT_MOC_LITERAL(73, 817, 8), // "foldname"
QT_MOC_LITERAL(74, 826, 12), // "wirteTxtFile"
QT_MOC_LITERAL(75, 839, 5), // "files"
QT_MOC_LITERAL(76, 845, 11), // "trackCamera"
QT_MOC_LITERAL(77, 857, 10), // "trackVideo"
QT_MOC_LITERAL(78, 868, 11), // "cameraFirst"
QT_MOC_LITERAL(79, 880, 15), // "trackCameraMode"
QT_MOC_LITERAL(80, 896, 14) // "trackVideoMode"

    },
    "FaceDetection\0file_open\0\0close_left\0"
    "is_fast_detect\0diffAdj\0muti_open\0"
    "cascade_file_load\0nestedCascade_file_load\0"
    "save_dialog\0muti_process\0stopProcess\0"
    "img_process\0updateImage\0scaledQimage\0"
    "src\0detectAndDraw\0cv::Mat&\0img\0"
    "getROIRect\0std::vector<cv::Rect>\0"
    "std::vector<std::vector<cv::Point> >\0"
    "contours\0cv::Mat\0gray\0origin_detect\0"
    "rectScale\0cv::Rect\0r\0mosaic\0faceOrg\0"
    "sleep\0msecs\0getFrameRate\0getFrameSize\0"
    "cv::Size\0getFrameNumber\0getFrameCounts\0"
    "getTempFile\0std::string&\0str\0"
    "getCurTempFile\0setOutput\0std::string\0"
    "filename\0createTemp\0framerate\0isColor\0"
    "getCodec\0char[]\0codec\0get_contours\0"
    "image\0bgfg_segm\0img0\0frame_num\0"
    "process_contours\0find_maxcontours\0"
    "op_dialog\0help_dialog\0bg_sub\0"
    "contrast_bright\0turn_on_rec\0turn_off_rec\0"
    "train_file_open\0getPredict\0saveFacesDir\0"
    "camera_save\0clearScreen\0autoTrain\0"
    "get_filelist\0vector<string>\0char*\0"
    "foldname\0wirteTxtFile\0files\0trackCamera\0"
    "trackVideo\0cameraFirst\0trackCameraMode\0"
    "trackVideoMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaceDetection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  274,    2, 0x08 /* Private */,
       3,    0,  275,    2, 0x08 /* Private */,
       4,    0,  276,    2, 0x08 /* Private */,
       5,    0,  277,    2, 0x08 /* Private */,
       6,    0,  278,    2, 0x08 /* Private */,
       7,    0,  279,    2, 0x08 /* Private */,
       8,    0,  280,    2, 0x08 /* Private */,
       9,    0,  281,    2, 0x08 /* Private */,
      10,    0,  282,    2, 0x08 /* Private */,
      11,    0,  283,    2, 0x08 /* Private */,
      12,    0,  284,    2, 0x08 /* Private */,
      13,    0,  285,    2, 0x08 /* Private */,
      14,    1,  286,    2, 0x08 /* Private */,
      16,    1,  289,    2, 0x08 /* Private */,
      19,    2,  292,    2, 0x08 /* Private */,
      25,    1,  297,    2, 0x08 /* Private */,
      26,    1,  300,    2, 0x08 /* Private */,
      29,    1,  303,    2, 0x08 /* Private */,
      31,    1,  306,    2, 0x08 /* Private */,
      33,    0,  309,    2, 0x08 /* Private */,
      34,    0,  310,    2, 0x08 /* Private */,
      36,    0,  311,    2, 0x08 /* Private */,
      37,    0,  312,    2, 0x08 /* Private */,
      38,    1,  313,    2, 0x08 /* Private */,
      41,    1,  316,    2, 0x08 /* Private */,
      42,    1,  319,    2, 0x08 /* Private */,
      45,    2,  322,    2, 0x08 /* Private */,
      48,    1,  327,    2, 0x08 /* Private */,
      51,    1,  330,    2, 0x08 /* Private */,
      53,    1,  333,    2, 0x08 /* Private */,
      55,    0,  336,    2, 0x08 /* Private */,
      56,    1,  337,    2, 0x08 /* Private */,
      57,    1,  340,    2, 0x08 /* Private */,
      58,    0,  343,    2, 0x08 /* Private */,
      59,    0,  344,    2, 0x08 /* Private */,
      60,    1,  345,    2, 0x08 /* Private */,
      61,    1,  348,    2, 0x08 /* Private */,
      62,    0,  351,    2, 0x08 /* Private */,
      63,    0,  352,    2, 0x08 /* Private */,
      64,    0,  353,    2, 0x08 /* Private */,
      65,    1,  354,    2, 0x08 /* Private */,
      66,    0,  357,    2, 0x08 /* Private */,
      67,    0,  358,    2, 0x08 /* Private */,
      68,    0,  359,    2, 0x08 /* Private */,
      69,    0,  360,    2, 0x08 /* Private */,
      70,    1,  361,    2, 0x08 /* Private */,
      74,    1,  364,    2, 0x08 /* Private */,
      76,    0,  367,    2, 0x08 /* Private */,
      77,    0,  368,    2, 0x08 /* Private */,
      78,    0,  369,    2, 0x08 /* Private */,
      79,    0,  370,    2, 0x08 /* Private */,
      80,    0,  371,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QImage, QMetaType::QImage,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    0x80000000 | 20, 0x80000000 | 21, 0x80000000 | 23,   22,   24,
    QMetaType::Void, 0x80000000 | 17,   18,
    0x80000000 | 27, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 23,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Double,
    0x80000000 | 35,
    QMetaType::Long,
    QMetaType::Long,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Bool, 0x80000000 | 43,   44,
    QMetaType::Bool, QMetaType::Double, QMetaType::Bool,   46,   47,
    QMetaType::Int, 0x80000000 | 49,   50,
    0x80000000 | 21, 0x80000000 | 23,   52,
    0x80000000 | 21, 0x80000000 | 17,   54,
    QMetaType::Void,
    0x80000000 | 21, 0x80000000 | 21,   22,
    0x80000000 | 21, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 21, 0x80000000 | 23,   18,
    0x80000000 | 23, 0x80000000 | 23,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 23,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 71, 0x80000000 | 72,   73,
    QMetaType::Void, 0x80000000 | 71,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FaceDetection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FaceDetection *_t = static_cast<FaceDetection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->file_open(); break;
        case 1: _t->close_left(); break;
        case 2: _t->is_fast_detect(); break;
        case 3: _t->diffAdj(); break;
        case 4: _t->muti_open(); break;
        case 5: _t->cascade_file_load(); break;
        case 6: _t->nestedCascade_file_load(); break;
        case 7: _t->save_dialog(); break;
        case 8: _t->muti_process(); break;
        case 9: _t->stopProcess(); break;
        case 10: _t->img_process(); break;
        case 11: _t->updateImage(); break;
        case 12: { QImage _r = _t->scaledQimage((*reinterpret_cast< QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 13: _t->detectAndDraw((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 14: { std::vector<cv::Rect> _r = _t->getROIRect((*reinterpret_cast< std::vector<std::vector<cv::Point> >(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< std::vector<cv::Rect>*>(_a[0]) = _r; }  break;
        case 15: _t->origin_detect((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 16: { cv::Rect _r = _t->rectScale((*reinterpret_cast< cv::Rect(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< cv::Rect*>(_a[0]) = _r; }  break;
        case 17: _t->mosaic((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 18: _t->sleep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: { double _r = _t->getFrameRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 20: { cv::Size _r = _t->getFrameSize();
            if (_a[0]) *reinterpret_cast< cv::Size*>(_a[0]) = _r; }  break;
        case 21: { long _r = _t->getFrameNumber();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 22: { long _r = _t->getFrameCounts();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 23: _t->getTempFile((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 24: _t->getCurTempFile((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 25: { bool _r = _t->setOutput((*reinterpret_cast< const std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->createTemp((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->getCodec((*reinterpret_cast< char(*)[]>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { std::vector<std::vector<cv::Point> > _r = _t->get_contours((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<cv::Point> >*>(_a[0]) = _r; }  break;
        case 29: { std::vector<std::vector<cv::Point> > _r = _t->bgfg_segm((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<cv::Point> >*>(_a[0]) = _r; }  break;
        case 30: _t->frame_num(); break;
        case 31: { std::vector<std::vector<cv::Point> > _r = _t->process_contours((*reinterpret_cast< std::vector<std::vector<cv::Point> >(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<cv::Point> >*>(_a[0]) = _r; }  break;
        case 32: { std::vector<std::vector<cv::Point> > _r = _t->find_maxcontours((*reinterpret_cast< std::vector<std::vector<cv::Point> >(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<cv::Point> >*>(_a[0]) = _r; }  break;
        case 33: _t->op_dialog(); break;
        case 34: _t->help_dialog(); break;
        case 35: { std::vector<std::vector<cv::Point> > _r = _t->bg_sub((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<cv::Point> >*>(_a[0]) = _r; }  break;
        case 36: { cv::Mat _r = _t->contrast_bright((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< cv::Mat*>(_a[0]) = _r; }  break;
        case 37: _t->turn_on_rec(); break;
        case 38: _t->turn_off_rec(); break;
        case 39: _t->train_file_open(); break;
        case 40: { int _r = _t->getPredict((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 41: _t->saveFacesDir(); break;
        case 42: _t->camera_save(); break;
        case 43: _t->clearScreen(); break;
        case 44: _t->autoTrain(); break;
        case 45: { vector<string> _r = _t->get_filelist((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vector<string>*>(_a[0]) = _r; }  break;
        case 46: _t->wirteTxtFile((*reinterpret_cast< vector<string>(*)>(_a[1]))); break;
        case 47: _t->trackCamera(); break;
        case 48: _t->trackVideo(); break;
        case 49: _t->cameraFirst(); break;
        case 50: _t->trackCameraMode(); break;
        case 51: _t->trackVideoMode(); break;
        default: ;
        }
    }
}

const QMetaObject FaceDetection::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FaceDetection.data,
      qt_meta_data_FaceDetection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaceDetection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaceDetection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaceDetection.stringdata0))
        return static_cast<void*>(const_cast< FaceDetection*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FaceDetection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
