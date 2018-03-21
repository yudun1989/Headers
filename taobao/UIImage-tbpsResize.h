//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (tbpsResize)
+ (id)tbpsImageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (id)imageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraPosition:(long long)arg2;
- (void)resizeWithWidth:(int)arg1 height:(int)arg2 RGBABuffer:(char **)arg3 RGBBuffer:(char **)arg4;
- (void)resizeAsyncImage:(CDUnknownBlockType)arg1;
- (id)tbpsImageWithSize:(struct CGSize)arg1;
- (id)tbpsCroppedImage:(struct CGRect)arg1;
- (id)tbpsResizedImage:(void *)arg1 size:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3 drawTransposed:(_Bool)arg4 interpolationQuality:(int)arg5;
- (id)tbpsScaleAspectFill:(struct CGSize)arg1;
- (struct CGAffineTransform)transformForOrientation:(struct CGSize)arg1;
- (id)tbpsResizedImage:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 drawTransposed:(_Bool)arg3 interpolationQuality:(int)arg4;
- (id)tbpsResizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)tbpsResizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)tbpsMergeImage:(id)arg1 withRect:(struct CGRect)arg2;
- (id)tbpsResizedImageLetterThan:(struct CGSize)arg1;
- (id)tbpsResizedImageLetterThan:(struct CGSize)arg1 minSize:(struct CGSize)arg2;
@end

