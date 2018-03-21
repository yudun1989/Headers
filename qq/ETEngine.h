//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ETEngine : NSObject
{
    NSMutableSet *_activingFontIds;
    NSObject<OS_dispatch_queue> *_loadFontQueue;
    struct ET_FontManagerRec_ *_etFontManager;
    NSMutableArray *_availableFontList;
    NSMutableArray *_updateFonts;
    _Bool _existLayoutNotice;
    int _isHighDeviceValue;
    _Bool _isSupportAIOFont;
}

+ (_Bool)getETBitmap:(CDStruct_0bacc907 *)arg1 bitmapContext:(struct CGContext *)arg2;
+ (id)colorWithHex:(long long)arg1;
+ (int)UIColorToETColor:(id)arg1;
+ (id)regBagInstance;
+ (id)instance;
@property(nonatomic) _Bool isSupportAIOFont; // @synthesize isSupportAIOFont=_isSupportAIOFont;
- (_Bool)Get_DIYFont_Global:(struct ET_FaceRec *)arg1 diyGlobal:(struct DIYGlobalRec *)arg2;
- (_Bool)Is_Char_Can_DIY:(struct ET_FaceRec *)arg1 unicode:(unsigned short)arg2;
- (_Bool)Is_DIYFont:(struct ET_FaceRec *)arg1;
- (void)DIYFont_Delete_Handle:(struct ET_DIYConfigHandleRec_ *)arg1;
- (struct ET_DIYConfigHandleRec_ *)DIYFont_Create_Handle:(struct ET_FaceRec *)arg1 json:(id)arg2;
- (_Bool)isDecoratedFont:(id)arg1;
- (long long)getDecorationFrameDelay:(void *)arg1 frameIndex:(long long)arg2;
- (unsigned long long)getDecorationFrameNum:(void *)arg1;
- (void)drawDecorationForeground:(struct CGContext *)arg1 descriptor:(void *)arg2 frameIndex:(long long)arg3 face:(struct ET_FaceRec *)arg4;
- (void)drawDecorationBackground:(struct CGContext *)arg1 descriptor:(void *)arg2 frameIndex:(long long)arg3 face:(struct ET_FaceRec *)arg4;
- (_Bool)DecorationDraw:(struct CGPoint)arg1 bitmapContext:(struct CGContext *)arg2 etFace:(struct ET_FaceRec *)arg3 descriptor:(void *)arg4 frameIndex:(long long)arg5 range:(struct _NSRange)arg6;
- (void)releaseDecorationDescriptor:(void *)arg1;
- (void *)createDecorationDescriptor:(id)arg1 lineCount:(long long)arg2 size:(struct CGSize)arg3 face:(struct ET_FaceRec *)arg4 lastLineWidth:(long long)arg5;
- (long long)retrieveEmoticonCollection:(id)arg1 face:(struct ET_FaceRec *)arg2 collection:(unsigned int *)arg3 maxCount:(long long)arg4;
- (void)destroyEmoticonHandle:(void *)arg1;
- (_Bool)drawEmoticonFrame:(void *)arg1 ctx:(struct CGContext *)arg2 index:(long long)arg3 font:(struct ET_FaceRec *)arg4;
- (long long)getEmoticonFameDelay:(void *)arg1 index:(long long)arg2;
- (long long)getFrameNum:(void *)arg1;
- (struct CGSize)getEmoticonSize:(void *)arg1;
- (void *)getEmoticonHandle:(id)arg1 face:(struct ET_FaceRec *)arg2 index:(long long)arg3;
- (double)getAscenderDifference:(struct ET_FaceRec *)arg1;
- (_Bool)hasShadow:(id)arg1 len:(long long)arg2 etFace:(struct ET_FaceRec *)arg3 color:(long long *)arg4 x_offset:(double *)arg5 y_offset:(double *)arg6 blur:(long long *)arg7;
- (_Bool)drawBackground:(id)arg1 len:(long long)arg2 context:(struct CGContext *)arg3 x:(double)arg4 y:(double)arg5 etFace:(struct ET_FaceRec *)arg6;
- (_Bool)hasBackground:(struct ET_FaceRec *)arg1;
- (_Bool)getHintColorFromFont:(id *)arg1 etFace:(struct ET_FaceRec *)arg2;
- (_Bool)hasCrochet:(double *)arg1 color:(id *)arg2 etFace:(struct ET_FaceRec *)arg3;
- (double)adjustedScale;
- (double)getPaintableTextWidth:(unsigned short *)arg1 stringLength:(int)arg2 withETFace:(struct ET_FaceRec *)arg3;
- (double)getFontDescenderWithETFace:(struct ET_FaceRec *)arg1;
- (double)getFontAscentWithETFace:(struct ET_FaceRec *)arg1;
- (double)getFontLineHeightWithETFace:(struct ET_FaceRec *)arg1;
- (int)drawTextAtPoint:(struct CGPoint)arg1 bitmapContext:(struct CGContext *)arg2 wcharString:(unsigned short *)arg3 stringLength:(int)arg4 withETFace:(struct ET_FaceRec *)arg5;
- (_Bool)isPaintableUnicode:(unsigned short)arg1 withETFace:(struct ET_FaceRec *)arg2;
- (id)switchFontWithFontId:(long long)arg1 fontSize:(double)arg2;
- (void)unloadFont:(long long)arg1;
- (void)dealDownloadSuccess:(long long)arg1;
- (void)dealDownloadFailed:(long long)arg1;
- (_Bool)setActiveFont:(long long)arg1 afterLoadFont:(CDUnknownBlockType)arg2;
- (void)delayLoadFontWith:(id)arg1;
- (void)removeActivingFont:(long long)arg1;
- (_Bool)hasActiveFonAndActivetWithFontId:(long long)arg1;
- (_Bool)hasActiveFontWithFontId:(long long)arg1;
- (_Bool)activeFontWithFontId:(long long)arg1;
- (id)availableFontWithFontId:(long long)arg1;
- (void)removeAvaiableFont:(long long)arg1;
- (id)availableFilenameWithFontId:(long long)arg1;
- (void)updateFont:(id)arg1 fontId:(long long)arg2;
- (void)loadAvailableFonts;
- (void)resetLayoutResultOnMainThread:(id)arg1;
- (void)loadFontSuccessLayoutResult:(long long)arg1;
- (void)loadFontSuccessWithFontID:(long long)arg1 fontType:(long long)arg2;
- (_Bool)loadHighBoomFontWithFilePath:(id)arg1 fontId:(long long)arg2;
- (_Bool)loadFont:(id)arg1 fontId:(long long)arg2;
- (void)destroyLibrary;
- (void)updateDpcConfig:(id)arg1;
- (void)setSupportFont;
- (double)getLoadDelayTime;
- (_Bool)isIPhone6or6Plus;
- (id)getMachineType;
- (id)initRedBag;
- (id)init;
- (int)drawTextAtPointredbag:(struct CGPoint)arg1 pointsize:(double)arg2 bitmapContext:(struct CGContext *)arg3 text:(id)arg4 color:(id)arg5;
- (struct CGSize)getTextSizeredbag:(id)arg1 pointsize:(double)arg2;
- (struct CGSize)redbagcommonTextProcess:(id)arg1 isDraw:(_Bool)arg2 pointsize:(double)arg3 point:(struct CGPoint)arg4 bitmapContext:(struct CGContext *)arg5 color:(id)arg6 retCount:(int *)arg7;
- (_Bool)isPaintableStrHanyi:(id)arg1;
- (_Bool)loadFont:(id)arg1;
- (id)getRedBagTTFPath;
- (_Bool)setActiveFont:(CDUnknownBlockType)arg1;

@end

