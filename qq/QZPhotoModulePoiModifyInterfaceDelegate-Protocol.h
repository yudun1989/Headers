//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MQZPhotoPoiArea, NSString;

@protocol QZPhotoModulePoiModifyInterfaceDelegate <NSObject>

@optional
- (void)poiModifyDidSelectSearchPoiInfoStrAddress:(NSString *)arg1 POIInfoStrName:(NSString *)arg2 POIInfoiType:(int)arg3 POIInfoStUsrLociLat:(long long)arg4 POIInfoStUsrLociLon:(long long)arg5 POIInfoStrPoiId:(NSString *)arg6 POIAreaSceneryName:(NSString *)arg7;
- (void)poiModifyDidSelectPoiArea:(MQZPhotoPoiArea *)arg1;
@end

