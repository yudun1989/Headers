//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALPasteboardAdapter : NSObject
{
    _Bool _isSupport;
    id _ALPasteBoardClass;
}

+ (void)setItems:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)itemsWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isSupportALPasteboard;
+ (id)sharedInstance;
@property(retain, nonatomic) id ALPasteBoardClass; // @synthesize ALPasteBoardClass=_ALPasteBoardClass;
@property(nonatomic) _Bool isSupport; // @synthesize isSupport=_isSupport;
- (void).cxx_destruct;

@end

