//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WXSDKInstance;
@protocol TBARCamera, WXRDMSLAMManagerDelegate;

@protocol WXRDMSLAMManager <NSObject>
@property(nonatomic) union _GLKVector4 featurePointColor;
@property(nonatomic) _Bool showFeaturePoints;
@property(nonatomic) struct CGSize viewSize;
@property(nonatomic) __weak id <WXRDMSLAMManagerDelegate> delegate;
- (_Bool)getAmbientIntensity:(float *)arg1 ambientColorTemperature:(float *)arg2;
- (id <TBARCamera>)arCamera;
- (void)renderFrame:(void (^)(_Bool, struct CGRect))arg1;
- (_Bool)resetCenter:(_Bool)arg1 useExistPlaneIfFailed:(_Bool)arg2;
- (_Bool)canPlaceAtCenter:(_Bool)arg1 detectExistPlane:(_Bool)arg2;
- (void)destroy;
- (void)resetTracking;
- (void)pause;
- (void)setup;
- (id)initWithWeexInstance:(WXSDKInstance *)arg1;
@end

