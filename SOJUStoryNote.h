//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStoryNote-Protocol.h"

@class NSNumber, NSString, SOJUStoryPointer;

@interface SOJUStoryNote : NSObject <SOJUStoryNote>
{
    NSString *_viewer;
    NSNumber *_screenshotted;
    NSNumber *_timestamp;
    SOJUStoryPointer *_storypointer;
    NSNumber *_isFriendViewOfPublicStory;
    NSNumber *_screenRecorded;
    NSNumber *_saved;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithViewer:(id)arg1 screenshotted:(id)arg2 timestamp:(id)arg3 storypointer:(id)arg4 isFriendViewOfPublicStory:(id)arg5 screenRecorded:(id)arg6 saved:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isFriendViewOfPublicStory; // @synthesize isFriendViewOfPublicStory=_isFriendViewOfPublicStory;
- (_Bool)isFriendViewOfPublicStoryValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *saved; // @synthesize saved=_saved;
- (_Bool)savedValue;
@property(readonly, copy, nonatomic) NSNumber *screenRecorded; // @synthesize screenRecorded=_screenRecorded;
- (_Bool)screenRecordedValue;
@property(readonly, copy, nonatomic) NSNumber *screenshotted; // @synthesize screenshotted=_screenshotted;
- (_Bool)screenshottedValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUStoryPointer *storypointer; // @synthesize storypointer=_storypointer;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (long long)timestampValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *viewer; // @synthesize viewer=_viewer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

