//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCGroupChatHeaderViewBar, NSString;

@interface MCGroupChatHeaderViewVO : NSObject
{
    _Bool _enableMask;
    MCGroupChatHeaderViewBar *_bar;
    NSString *_headerImageURL;
    NSString *_groupName;
    NSString *_count;
}

@property(retain) NSString *count; // @synthesize count=_count;
@property(retain) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool enableMask; // @synthesize enableMask=_enableMask;
@property(retain) NSString *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(retain) MCGroupChatHeaderViewBar *bar; // @synthesize bar=_bar;
- (void).cxx_destruct;

@end

