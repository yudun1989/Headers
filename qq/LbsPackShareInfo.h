//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LbsPackShareInfo : NSObject
{
    NSString *_poiName;
    NSString *_poiId;
    NSString *_pid;
}

@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
- (void).cxx_destruct;
- (id)lbsHandleWildcardStr:(id)arg1 withNick:(id)arg2 andPoiName:(id)arg3;
- (id)lbsPackShareSheetGetDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (void)didFinishShare:(id)arg1;
- (void)addNotificationObserver;
- (void)dealloc;
- (id)description;
- (id)initWithPId:(id)arg1 poiId:(id)arg2 poiName:(id)arg3;

@end
