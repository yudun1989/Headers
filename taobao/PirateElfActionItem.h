//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSString;

@interface PirateElfActionItem : PirateDataModel
{
    long long _action;
    long long _windowSize;
    long long _click;
    NSString *_rect;
    NSString *_resourceID;
}

@property(retain, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(retain, nonatomic) NSString *rect; // @synthesize rect=_rect;
@property(nonatomic) long long click; // @synthesize click=_click;
@property(nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;

@end

