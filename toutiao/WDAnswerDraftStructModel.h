//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, WDImageUrlStructModel><Optional;

@interface WDAnswerDraftStructModel : WDBaseModel
{
    NSString<Optional> *_draft;
    NSNumber<Optional> *_modify_time;
    NSString<Optional> *_qid;
    NSString<Optional> *_question_title;
    NSString<Optional> *_schema;
    NSNumber<Optional> *_answer_type;
    NSString<Optional> *_content_rich_span;
    NSArray<WDImageUrlStructModel><Optional> *_image_list;
}

@property(copy, nonatomic) NSArray<WDImageUrlStructModel><Optional> *image_list; // @synthesize image_list=_image_list;
@property(retain, nonatomic) NSString<Optional> *content_rich_span; // @synthesize content_rich_span=_content_rich_span;
@property(retain, nonatomic) NSNumber<Optional> *answer_type; // @synthesize answer_type=_answer_type;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString<Optional> *question_title; // @synthesize question_title=_question_title;
@property(retain, nonatomic) NSString<Optional> *qid; // @synthesize qid=_qid;
@property(retain, nonatomic) NSNumber<Optional> *modify_time; // @synthesize modify_time=_modify_time;
@property(retain, nonatomic) NSString<Optional> *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

