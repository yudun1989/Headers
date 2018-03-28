//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber;
@protocol Optional;

@interface FRCommentTabInfoStructModel : JSONModel
{
    NSArray<Optional> *_tabs;
    NSNumber *_current_tab_index;
}

@property(retain, nonatomic) NSNumber *current_tab_index; // @synthesize current_tab_index=_current_tab_index;
@property(retain, nonatomic) NSArray<Optional> *tabs; // @synthesize tabs=_tabs;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

