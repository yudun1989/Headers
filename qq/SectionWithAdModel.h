//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQVipComicAdvertiseModel;

@interface SectionWithAdModel : NSObject
{
    NSString *_sectionId;
    unsigned long long _picCount;
    QQVipComicAdvertiseModel *_model;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) QQVipComicAdvertiseModel *model; // @dynamic model;
@property(nonatomic) unsigned long long picCount; // @dynamic picCount;
@property(retain, nonatomic) NSString *sectionId; // @dynamic sectionId;

@end

