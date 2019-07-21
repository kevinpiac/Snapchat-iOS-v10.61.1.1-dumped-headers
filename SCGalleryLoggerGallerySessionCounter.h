//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryLoggerGallerySessionCounter : NSObject
{
    long long _snapLockCount;
    long long _snapUnlockCount;
    long long _storyLockCount;
    long long _storyUnlockCount;
    long long _snapSendCount;
    long long _snapPostCount;
    long long _storySendCount;
    long long _storyPostCount;
    long long _snapCreateCount;
    long long _snapDeleteCount;
    long long _storyCreateCount;
    long long _storyDeleteCount;
    long long _incompatibleCount;
    long long _searchTapCount;
    long long _flashbackCount;
    long long _nearbyCount;
}

@property(nonatomic) long long flashbackCount; // @synthesize flashbackCount=_flashbackCount;
@property(nonatomic) long long incompatibleCount; // @synthesize incompatibleCount=_incompatibleCount;
@property(nonatomic) long long nearbyCount; // @synthesize nearbyCount=_nearbyCount;
@property(nonatomic) long long searchTapCount; // @synthesize searchTapCount=_searchTapCount;
@property(nonatomic) long long snapCreateCount; // @synthesize snapCreateCount=_snapCreateCount;
@property(nonatomic) long long snapDeleteCount; // @synthesize snapDeleteCount=_snapDeleteCount;
@property(nonatomic) long long snapLockCount; // @synthesize snapLockCount=_snapLockCount;
@property(nonatomic) long long snapPostCount; // @synthesize snapPostCount=_snapPostCount;
@property(nonatomic) long long snapSendCount; // @synthesize snapSendCount=_snapSendCount;
@property(nonatomic) long long snapUnlockCount; // @synthesize snapUnlockCount=_snapUnlockCount;
@property(nonatomic) long long storyCreateCount; // @synthesize storyCreateCount=_storyCreateCount;
@property(nonatomic) long long storyDeleteCount; // @synthesize storyDeleteCount=_storyDeleteCount;
@property(nonatomic) long long storyLockCount; // @synthesize storyLockCount=_storyLockCount;
@property(nonatomic) long long storyPostCount; // @synthesize storyPostCount=_storyPostCount;
@property(nonatomic) long long storySendCount; // @synthesize storySendCount=_storySendCount;
@property(nonatomic) long long storyUnlockCount; // @synthesize storyUnlockCount=_storyUnlockCount;

@end
