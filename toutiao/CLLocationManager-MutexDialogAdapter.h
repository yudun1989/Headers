//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLLocationManager.h>

@interface CLLocationManager (MutexDialogAdapter)
+ (void)ttdd_showLocationAtLocalChannel;
+ (_Bool)_hitMoveLocationClientAB;
+ (void)load;
- (void)_hookLocationManagerAuthorizationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ttdd_dispatchRequestAuthorization:(CDUnknownBlockType)arg1;
- (void)ttdd_setDelegate:(id)arg1;
- (void)ttdd_requestAlwaysAuthorization;
- (void)ttdd_requestWhenInUseAuthorization;
- (id)ttdd_init;
@end

