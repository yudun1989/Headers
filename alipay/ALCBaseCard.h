//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ALCBaseCard : NSObject
{
    _Bool _valid;
    NSString *_cardId;
    NSString *_templateId;
    NSString *_rank;
    NSString *_gmtModified;
    NSString *_bizType;
    NSString *_abstractId;
    NSString *_desc;
}

@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *abstractId; // @synthesize abstractId=_abstractId;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *gmtModified; // @synthesize gmtModified=_gmtModified;
@property(retain, nonatomic) NSString *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end

