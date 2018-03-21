//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CATextLayer, NSMutableDictionary, NSString;

@interface GLMapGraphicsImpl : NSObject
{
    NSString *_fontName;
    NSString *_boldFontName;
    NSMutableDictionary *_dictionaryFontSizes;
    CATextLayer *_textLayer;
    NSMutableDictionary *_dictionaryImages;
}

@property(retain, nonatomic) NSMutableDictionary *dictionaryImages; // @synthesize dictionaryImages=_dictionaryImages;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) NSMutableDictionary *dictionaryFontSizes; // @synthesize dictionaryFontSizes=_dictionaryFontSizes;
@property(retain, nonatomic) NSString *boldFontName; // @synthesize boldFontName=_boldFontName;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (id)imageByName:(id)arg1;
- (void)removeImage:(id)arg1;
- (void)addImage:(id)arg1 imageName:(id)arg2;
- (unsigned int)intFromHexString:(id)arg1;
- (id)getUIColorObjectFromHexString:(id)arg1 alpha:(double)arg2;
- (struct _TXBitmap *)imageFromString:(id)arg1 attributes:(id)arg2 size:(struct CGSize)arg3;
- (struct _TXBitmap *)createDrawText:(id)arg1 scale:(float *)arg2;
- (struct _TXBitmap *)createRouteArrowTexture:(int)arg1;
- (struct _TXBitmap *)loadImage:(const char *)arg1 code:(long long)arg2 scale:(float *)arg3 anchorPointX1:(float *)arg4 anchorPointY1:(float *)arg5;
- (struct _TXSize)calcTextSize:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(_Bool)arg4;
- (void)drawString:(struct _TXTextBitmap *)arg1 text:(unsigned short *)arg2 count:(int)arg3 fontSize:(int)arg4 bold:(_Bool)arg5 density:(float)arg6;
- (id)init;

@end

