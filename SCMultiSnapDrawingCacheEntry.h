//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet;

@interface SCMultiSnapDrawingCacheEntry : NSObject
{
    long long _strokeStartId;
    long long _strokeEndId;
    long long _strokeCount;
    NSMutableSet *_segmentIdsContainingEntry;
    NSData *_imageData;
}

- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)init;
@property(readonly, nonatomic) NSMutableSet *segmentIdsContainingEntry; // @synthesize segmentIdsContainingEntry=_segmentIdsContainingEntry;
@property(nonatomic) long long strokeCount; // @synthesize strokeCount=_strokeCount;
@property(nonatomic) long long strokeEndId; // @synthesize strokeEndId=_strokeEndId;
@property(nonatomic) long long strokeStartId; // @synthesize strokeStartId=_strokeStartId;

@end

