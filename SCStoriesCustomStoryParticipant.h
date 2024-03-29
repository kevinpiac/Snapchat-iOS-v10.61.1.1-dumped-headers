//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesCustomStoryParticipant : NSObject <NSCopying>
{
    _Bool _canView;
    _Bool _canPost;
    _Bool _canAutosave;
    _Bool _isAutosaveEnabled;
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canAutosave; // @synthesize canAutosave=_canAutosave;
@property(readonly, nonatomic) _Bool canPost; // @synthesize canPost=_canPost;
@property(readonly, nonatomic) _Bool canView; // @synthesize canView=_canView;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 canView:(_Bool)arg4 canPost:(_Bool)arg5 canAutosave:(_Bool)arg6 isAutosaveEnabled:(_Bool)arg7;
@property(readonly, nonatomic) _Bool isAutosaveEnabled; // @synthesize isAutosaveEnabled=_isAutosaveEnabled;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

