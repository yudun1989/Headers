//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;
@protocol Optional;

@interface WDWendaQuestionDefaulttagRequestModel : TTRequestModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_content;
    NSString<Optional> *_api_param;
}

@property(retain, nonatomic) NSString<Optional> *api_param; // @synthesize api_param=_api_param;
@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

