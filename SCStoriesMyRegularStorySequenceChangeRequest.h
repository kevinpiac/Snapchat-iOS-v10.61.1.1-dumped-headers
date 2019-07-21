//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesMyRegularStorySequenceChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    long long _myStoryIndex;
    NSArray *_storySnaps;
}

+ (id)changeRequestForStoriesMyRegularStorySequence:(id)arg1;
+ (id)creationRequestWithStoriesMyRegularStorySequence:(id)arg1;
+ (id)deletionRequestForStoriesMyRegularStorySequence:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesMyRegularStorySequence;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 myStoryIndex:(long long)arg2 storySnaps:(id)arg3;
@property(nonatomic) long long myStoryIndex; // @synthesize myStoryIndex=_myStoryIndex;
@property(copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
