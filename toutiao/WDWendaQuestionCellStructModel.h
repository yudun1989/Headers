//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSString, WDQuestionCellDataStructModel;
@protocol Optional;

@interface WDWendaQuestionCellStructModel : WDBaseModel
{
    NSString<Optional> *_group_id;
    WDQuestionCellDataStructModel<Optional> *_content;
}

@property(retain, nonatomic) WDQuestionCellDataStructModel<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

