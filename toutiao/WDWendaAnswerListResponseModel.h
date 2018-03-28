//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, WDNextItemStructModel><Optional;

@interface WDWendaAnswerListResponseModel : TTResponseModel
{
    NSNumber<Optional> *_err_no;
    NSString<Optional> *_err_tips;
    NSArray<WDNextItemStructModel><Optional> *_answer_list;
}

@property(copy, nonatomic) NSArray<WDNextItemStructModel><Optional> *answer_list; // @synthesize answer_list=_answer_list;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber<Optional> *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
