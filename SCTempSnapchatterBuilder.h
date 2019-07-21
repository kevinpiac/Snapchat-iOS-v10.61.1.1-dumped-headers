//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCTempSnapchatterBuilder : NSObject
{
    NSString *_username;
    NSString *_displayName;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

+ (id)tempSnapchatter;
+ (id)tempSnapchatterFromExistingTempSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withBitmojiAvatarId:(id)arg1;
- (id)withBitmojiSelfieId:(id)arg1;
- (id)withDisplayName:(id)arg1;
- (id)withUsername:(id)arg1;

@end

