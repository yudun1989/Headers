//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, WBSlidesItem;

@interface WBSlidesImagePlaybackLog : NSObject
{
    _Bool _clicked;
    WBSlidesItem *_slidesItem;
    unsigned long long _validDuration;
    NSDictionary *_actionLog;
}

@property(nonatomic) _Bool clicked; // @synthesize clicked=_clicked;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(nonatomic) unsigned long long validDuration; // @synthesize validDuration=_validDuration;
@property(retain, nonatomic) WBSlidesItem *slidesItem; // @synthesize slidesItem=_slidesItem;
- (void).cxx_destruct;
- (id)_currentNetworkType;
- (void)commit;

@end

