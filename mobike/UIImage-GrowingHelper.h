//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (GrowingHelper)
+ (unsigned int *)createTemplateArrayByColor:(double *)arg1 location:(double *)arg2 count:(long long)arg3;
+ (const unsigned int *)getMaskTemplate;
+ (const unsigned int *)getColorTemplate;
+ (id)createHeatMapImageBySize:(struct CGSize)arg1 brightLevel:(double)arg2;
- (id)growingHelper_getSubImage:(struct CGRect)arg1;
- (id)growingHelper_Base64PNG;
- (id)growingHelper_Base64JPEG:(double)arg1;
- (id)growingHelper_PNG;
- (id)growingHelper_JPEG:(double)arg1;
@end

