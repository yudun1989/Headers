//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureDevice.h>

@interface AVCaptureDevice (KSHelpers)
+ (id)ks_frontVideoDevice;
+ (id)ks_backVideoDevice;
- (id)ks_supportedCaptureResolutions;
- (_Bool)ks_supportResolution:(struct CGSize)arg1;
- (double)mostFittingFrameRateOfCurrentFormatForFrameRate:(double)arg1;
@end

