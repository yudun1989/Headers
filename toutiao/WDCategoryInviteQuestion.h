//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDCategoryInviteQuestion : JSONModel
{
    NSNumber<Optional> *_qid;
    NSString<Optional> *_title;
    NSString<Optional> *_schema;
}

@property(copy, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber<Optional> *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;

@end

