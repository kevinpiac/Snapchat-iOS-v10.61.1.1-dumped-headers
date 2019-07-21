//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCOperaPlaybackEventSession : NSObject
{
    NSString *_eventId;
    long long _loadPhase;
    NSDate *_startTime;
    NSDate *_openTime;
    unsigned long long _itemLoadedCount;
    long long _itemLoadState;
    long long _playSource;
    long long _entryEvent;
}

- (void).cxx_destruct;
@property(nonatomic) long long entryEvent; // @synthesize entryEvent=_entryEvent;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (id)init;
@property(nonatomic) long long itemLoadState; // @synthesize itemLoadState=_itemLoadState;
@property(nonatomic) unsigned long long itemLoadedCount; // @synthesize itemLoadedCount=_itemLoadedCount;
@property(nonatomic) long long loadPhase; // @synthesize loadPhase=_loadPhase;
@property(retain, nonatomic) NSDate *openTime; // @synthesize openTime=_openTime;
@property(nonatomic) long long playSource; // @synthesize playSource=_playSource;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;

@end

