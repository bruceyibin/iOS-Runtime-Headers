/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNText : SCNGeometry {
    BOOL __wantsSeparateGeometryElements;
    long _alignmentMode;
    struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; } *_chamferProfile;
    float _chamferRadius;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _customContainerFrame;
    float _discretizedStraightLineMaxLength;
    float _extrusionDepth;
    float _flatness;
    UIFont *_font;
    int _primitiveType;
    id _reserved;
    id _string;
    long _truncationMode;
    BOOL _useCustomContainerFrame;
    BOOL _wrapped;
}

@property (nonatomic, copy) NSString *alignmentMode;
@property (nonatomic, copy) UIBezierPath *chamferProfile;
@property (nonatomic) float chamferRadius;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } containerFrame;
@property (nonatomic) float extrusionDepth;
@property (nonatomic) float flatness;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) id string;
@property (nonatomic, copy) NSString *truncationMode;
@property (getter=isWrapped, nonatomic) BOOL wrapped;

+ (id)SCNJSExportProtocol;
+ (BOOL)supportsSecureCoding;
+ (id)text;
+ (id)textWithString:(id)arg1 extrusionDepth:(float)arg2;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { bool x_10_1_1; bool x_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; bool x_10_1_14; bool x_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)__createCFObject;
- (void)_customDecodingOfSCNText:(id)arg1;
- (void)_customEncodingOfSCNText:(id)arg1;
- (void)_syncObjCModel:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_4_1; unsigned char x_1_4_2[4]; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; int x_1_3_6; int x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFArray {} *x_1_2_5; struct __CFSet {} *x_1_2_6; struct __CFArray {} *x_1_2_7; struct __C3DAABB {} *x_1_2_8; int (*x_1_2_9)(); struct { bool x_10_3_1; bool x_10_3_2; unsigned short x_10_3_3; unsigned short x_10_3_4; float x_10_3_5; float x_10_3_6; unsigned char x_10_3_7; unsigned char x_10_3_8; unsigned char x_10_3_9; unsigned char x_10_3_10; struct __C3DMeshElement {} *x_10_3_11; struct __C3DMeshSource {} *x_10_3_12; struct __C3DMesh {} *x_10_3_13; bool x_10_3_14; bool x_10_3_15; void *x_10_3_16; void *x_10_3_17; } x_1_2_10; } x_1_1_1; struct { BOOL x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; long x_2_2_5; float x_2_2_6; struct CGPath {} *x_2_2_7; void *x_2_2_8; struct CGPath {} *x_2_2_9; void *x_2_2_10; } x_1_1_2; struct __C3DMesh {} *x_1_1_3; unsigned char x_1_1_4[16]; } x1; struct { struct __CTFrame {} *x_2_1_1; void *x_2_1_2; void *x_2_1_3; long x_2_1_4; long x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_9_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_9_2_2; } x_2_1_9; } x2; }*)arg1;
- (BOOL)_wantsSeparateGeometryElements;
- (id)alignmentMode;
- (struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; }*)chamferProfile;
- (float)chamferRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containerFrame;
- (id)copy;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)discretizedStraightLineMaxLength;
- (void)encodeWithCoder:(id)arg1;
- (float)extrusionDepth;
- (float)flatness;
- (id)font;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(float*)arg2;
- (id)init;
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_4_1; unsigned char x_1_4_2[4]; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; int x_1_3_6; int x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFArray {} *x_1_2_5; struct __CFSet {} *x_1_2_6; struct __CFArray {} *x_1_2_7; struct __C3DAABB {} *x_1_2_8; int (*x_1_2_9)(); struct { bool x_10_3_1; bool x_10_3_2; unsigned short x_10_3_3; unsigned short x_10_3_4; float x_10_3_5; float x_10_3_6; unsigned char x_10_3_7; unsigned char x_10_3_8; unsigned char x_10_3_9; unsigned char x_10_3_10; struct __C3DMeshElement {} *x_10_3_11; struct __C3DMeshSource {} *x_10_3_12; struct __C3DMesh {} *x_10_3_13; bool x_10_3_14; bool x_10_3_15; void *x_10_3_16; void *x_10_3_17; } x_1_2_10; } x_1_1_1; struct { BOOL x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; long x_2_2_5; float x_2_2_6; struct CGPath {} *x_2_2_7; void *x_2_2_8; struct CGPath {} *x_2_2_9; void *x_2_2_10; } x_1_1_2; struct __C3DMesh {} *x_1_1_3; unsigned char x_1_1_4[16]; } x1; struct { struct __CTFrame {} *x_2_1_1; void *x_2_1_2; void *x_2_1_3; long x_2_1_4; long x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_9_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_9_2_2; } x_2_1_9; } x2; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextGeometryRef:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_4_1; unsigned char x_1_4_2[4]; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; int x_1_3_6; int x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFArray {} *x_1_2_5; struct __CFSet {} *x_1_2_6; struct __CFArray {} *x_1_2_7; struct __C3DAABB {} *x_1_2_8; int (*x_1_2_9)(); struct { bool x_10_3_1; bool x_10_3_2; unsigned short x_10_3_3; unsigned short x_10_3_4; float x_10_3_5; float x_10_3_6; unsigned char x_10_3_7; unsigned char x_10_3_8; unsigned char x_10_3_9; unsigned char x_10_3_10; struct __C3DMeshElement {} *x_10_3_11; struct __C3DMeshSource {} *x_10_3_12; struct __C3DMesh {} *x_10_3_13; bool x_10_3_14; bool x_10_3_15; void *x_10_3_16; void *x_10_3_17; } x_1_2_10; } x_1_1_1; struct { BOOL x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; long x_2_2_5; float x_2_2_6; struct CGPath {} *x_2_2_7; void *x_2_2_8; struct CGPath {} *x_2_2_9; void *x_2_2_10; } x_1_1_2; struct __C3DMesh {} *x_1_1_3; unsigned char x_1_1_4[16]; } x1; struct { struct __CTFrame {} *x_2_1_1; void *x_2_1_2; void *x_2_1_3; long x_2_1_4; long x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_9_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_9_2_2; } x_2_1_9; } x2; }*)arg1;
- (BOOL)isWrapped;
- (struct { struct { BOOL x_1_1_1; float x_1_1_2; float x_1_1_3; long x_1_1_4; float x_1_1_5; void *x_1_1_6; void *x_1_1_7; } x1; void *x2; void *x3; long x4; long x5; bool x6; bool x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; float x9; })params;
- (id)presentationGeometry;
- (int)primitiveType;
- (void)setAlignmentMode:(id)arg1;
- (void)setChamferProfile:(struct UIBezierPath { Class x1; struct CGPath {} *x2; float *x3; unsigned int x4; float x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; struct CGPath {} *x12; BOOL x13; }*)arg1;
- (void)setChamferRadius:(float)arg1;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDiscretizedStraightLineMaxLength:(float)arg1;
- (void)setExtrusionDepth:(float)arg1;
- (void)setFlatness:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setPrimitiveType:(int)arg1;
- (void)setString:(id)arg1;
- (void)setTruncationMode:(id)arg1;
- (void)setWrapped:(BOOL)arg1;
- (void)set_wantsSeparateGeometryElements:(BOOL)arg1;
- (id)string;
- (id)truncationMode;

@end
