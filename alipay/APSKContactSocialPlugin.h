//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSKShareBasePlugin.h"

@interface APSKContactSocialPlugin : APSKShareBasePlugin
{
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareContent:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWith:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

