//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCustomStoryCreationInfo;

@interface SCCustomStoryCreationMetadata : NSObject <NSCopying>
{
    _Bool _autoSaveEnabled;
    NSString *_displayName;
    SCCustomStoryCreationInfo *_creationInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool autoSaveEnabled; // @synthesize autoSaveEnabled=_autoSaveEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCCustomStoryCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)arg1 autoSaveEnabled:(_Bool)arg2 creationInfo:(id)arg3;
- (_Bool)isEqual:(id)arg1;

@end

