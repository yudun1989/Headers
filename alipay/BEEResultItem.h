//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BEEResultItem : NSObject
{
    NSString *_title;
    NSArray *_subTitles;
    CDStruct_a846bce0 _status;
}

@property(nonatomic) CDStruct_a846bce0 status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *subTitles; // @synthesize subTitles=_subTitles;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

