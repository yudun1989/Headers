//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MulMemSelMemberInfo;

@interface SubMemHeaderSelectedModel : NSObject
{
    int _headerViewState;
    MulMemSelMemberInfo *_selectedMemberInfo;
}

@property(nonatomic) int headerViewState; // @synthesize headerViewState=_headerViewState;
@property(retain, nonatomic) MulMemSelMemberInfo *selectedMemberInfo; // @synthesize selectedMemberInfo=_selectedMemberInfo;
- (void).cxx_destruct;
- (id)initModelWithSelMemInfo:(id)arg1;

@end

