//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface KSQuizOption : NSObject
{
    NSString *_optionId;
    NSString *_body;
    NSNumber *_index;
    NSNumber *_voteRate;
    NSString *_voteCount;
    NSNumber *_correctOption;
}

@property(retain, nonatomic) NSNumber *correctOption; // @synthesize correctOption=_correctOption;
@property(retain, nonatomic) NSString *voteCount; // @synthesize voteCount=_voteCount;
@property(retain, nonatomic) NSNumber *voteRate; // @synthesize voteRate=_voteRate;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *optionId; // @synthesize optionId=_optionId;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

