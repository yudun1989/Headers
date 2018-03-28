//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAccountUserAuditEntity.h"

@class NSString, UIImage;

@interface TTEditableUserAuditInfo : TTAccountUserAuditEntity
{
    _Bool _isAuditing;
    _Bool _editEnabled;
    unsigned long long _editingItem;
    unsigned long long _modifiedFlags;
    UIImage *_avatarImage;
    UIImage *_bgImage;
    NSString *_avatarImageURI;
    NSString *_bgImageURI;
}

@property(copy, nonatomic) NSString *bgImageURI; // @synthesize bgImageURI=_bgImageURI;
@property(copy, nonatomic) NSString *avatarImageURI; // @synthesize avatarImageURI=_avatarImageURI;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) unsigned long long modifiedFlags; // @synthesize modifiedFlags=_modifiedFlags;
@property(nonatomic) unsigned long long editingItem; // @synthesize editingItem=_editingItem;
@property(nonatomic) _Bool editEnabled; // @synthesize editEnabled=_editEnabled;
@property(nonatomic) _Bool isAuditing; // @synthesize isAuditing=_isAuditing;
- (void).cxx_destruct;
- (id)toModifiedParamters;
- (id)toUploadedParameters;
- (_Bool)containUserAuditInfo:(id)arg1;
- (id)init;

@end

