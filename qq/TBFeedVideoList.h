//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface TBFeedVideoList : QQModel
{
    _Bool _hasShareToDiscover;
    unsigned int _date;
    NSString *_feedID;
    NSArray *_vidList;
}

@property(nonatomic) _Bool hasShareToDiscover; // @synthesize hasShareToDiscover=_hasShareToDiscover;
@property(retain, nonatomic) NSArray *vidList; // @synthesize vidList=_vidList;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
- (void)delVid:(id)arg1;
- (void)addVid:(id)arg1;
- (void)dealloc;

@end

