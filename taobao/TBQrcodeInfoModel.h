//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBQrcodeInfoModel : TBJSONModel
{
    int _isrepeat;
    int _deleted;
    int _iseditable;
    NSString *_sourceId;
    NSString *_eventId;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_thedate;
    NSString *_title;
    NSString *_link;
    NSString *_remindType;
    NSString *_lut;
    NSString *_repeat;
    NSString *_remind;
}

@property(nonatomic) int iseditable; // @synthesize iseditable=_iseditable;
@property(nonatomic) int deleted; // @synthesize deleted=_deleted;
@property(nonatomic) int isrepeat; // @synthesize isrepeat=_isrepeat;
@property(retain, nonatomic) NSString *remind; // @synthesize remind=_remind;
@property(retain, nonatomic) NSString *repeat; // @synthesize repeat=_repeat;
@property(retain, nonatomic) NSString *lut; // @synthesize lut=_lut;
@property(retain, nonatomic) NSString *remindType; // @synthesize remindType=_remindType;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *thedate; // @synthesize thedate=_thedate;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
- (void).cxx_destruct;

@end

