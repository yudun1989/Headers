//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface APCommandTask : NSObject
{
    _Bool _invalid;
    _Bool _executed;
    _Bool _succeeded;
    NSString *_uuid;
    NSString *_command;
    NSDictionary *_arguments;
}

@property(nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(nonatomic) _Bool executed; // @synthesize executed=_executed;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;

@end

