//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCBitmojiSelfieUserBuilder : NSObject
{
    NSString *_userId;
    NSString *_avatarId;
    NSString *_dratiniId;
}

+ (id)withBitmojiSelfieUser:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAvatarId:(id)arg1;
- (id)setDratiniId:(id)arg1;
- (id)setUserId:(id)arg1;

@end

