//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface OSPShortcutModel : NSObject
{
    NSString *_shortcutPayChannel;
    NSString *_shortcutPayChannelDesc;
}

@property(copy, nonatomic) NSString *shortcutPayChannelDesc; // @synthesize shortcutPayChannelDesc=_shortcutPayChannelDesc;
@property(copy, nonatomic) NSString *shortcutPayChannel; // @synthesize shortcutPayChannel=_shortcutPayChannel;
- (void).cxx_destruct;
- (id)getIcon;
- (_Bool)needShowShortCut:(id)arg1;
- (id)initWithData:(id)arg1 desc:(id)arg2;

@end

