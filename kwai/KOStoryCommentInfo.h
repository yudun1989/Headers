//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KOStoryActorInfo, NSString;

@interface KOStoryCommentInfo : NSObject
{
    NSString *_text;
    KOStoryActorInfo *_writer;
}

@property(readonly, nonatomic) KOStoryActorInfo *writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)arg1 writer:(id)arg2;

@end

