//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Create)
+ (id)imageWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3 borderColor:(id)arg4 backgroundColors:(id)arg5;
+ (id)imageWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3 borderColor:(id)arg4 backgroundColor:(id)arg5;
+ (id)imageWithSize:(struct CGSize)arg1 borderWidth:(double)arg2 borderColor:(id)arg3 backgroundColor:(id)arg4;
+ (id)imageWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2 backgroundColor:(id)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 backgroundColor:(id)arg2;
+ (id)imageWithUIColor:(id)arg1;
+ (id)drawImage:(id)arg1 inImage:(id)arg2 atPoint:(struct CGPoint)arg3;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)centerStrechedresourceImageNamed:(id)arg1;
- (struct CGAffineTransform)transformForOrientation:(struct CGSize)arg1;
- (id)resizedImage:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 drawTransposed:(_Bool)arg3 interpolationQuality:(int)arg4;
- (id)resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)resizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)thumbnailImage:(long long)arg1 transparentBorder:(unsigned long long)arg2 cornerRadius:(unsigned long long)arg3 interpolationQuality:(int)arg4;
- (id)croppedImage:(struct CGRect)arg1;
- (id)imageDataWithMaxSize:(struct CGSize)arg1 maxDataSize:(float)arg2;
- (void)addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(float)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (id)imageScaleAspectToMaxSize:(double)arg1;
@end

