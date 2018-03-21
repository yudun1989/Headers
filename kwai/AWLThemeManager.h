//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AWLThemeManager : NSObject
{
    NSString *_currentTheme;
    NSMutableDictionary *_themeList;
    NSMutableDictionary *_themeRelationship;
    NSMutableDictionary *_themeDefaultsList;
}

@property(retain, nonatomic) NSMutableDictionary *themeDefaultsList; // @synthesize themeDefaultsList=_themeDefaultsList;
@property(retain, nonatomic) NSMutableDictionary *themeRelationship; // @synthesize themeRelationship=_themeRelationship;
@property(retain, nonatomic) NSMutableDictionary *themeList; // @synthesize themeList=_themeList;
@property(retain, nonatomic) NSString *currentTheme; // @synthesize currentTheme=_currentTheme;
- (void).cxx_destruct;
- (_Bool)isValidString:(id)arg1;
- (id)filePathForFileName:(id)arg1 ofType:(id)arg2 forTheme:(id)arg3;
- (id)filePathForFileName:(id)arg1 forTheme:(id)arg2;
- (id)filePathForFileName:(id)arg1 ofType:(id)arg2;
- (id)filePathForFileName:(id)arg1;
- (id)objectForKey:(id)arg1 forTheme:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)fontFromString:(id)arg1;
- (id)fontForKey:(id)arg1 forTheme:(id)arg2;
- (id)fontForKey:(id)arg1;
- (id)relativePathToMainBundle:(id)arg1;
- (id)imageNamed:(id)arg1 forTheme:(id)arg2;
- (id)imageNamed:(id)arg1;
- (id)colorFromString:(id)arg1;
- (id)colorForKey:(id)arg1 forTheme:(id)arg2;
- (id)colorForKey:(id)arg1;
- (id)allThemes;
- (id)defaultsForTheme:(id)arg1;
- (id)addTheme:(id)arg1;
- (id)init;

@end

