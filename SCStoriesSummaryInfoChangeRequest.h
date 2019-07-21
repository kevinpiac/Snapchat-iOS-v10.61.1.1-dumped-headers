//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString, SCStoriesThumbnailMedia;

@interface SCStoriesSummaryInfoChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _hasUnviewedStories;
    _Bool _customStoryCurrentUserCanPost;
    NSString *_identifier;
    long long _type;
    SCStoriesThumbnailMedia *_thumbnail;
    double _expirationDate;
    long long _numActiveStories;
    double _mostRecentStoryTimestamp;
    double _mostRecentUnviewedTimestamp;
    double _mostRecentViewedTimestamp;
    NSArray *_mediaSummaries;
    NSString *_customStoryPublicationId;
    long long _customStoryType;
    NSString *_customStoryDisplayName;
    NSArray *_customStoryPosterUsernames;
    long long _storyContentType;
}

+ (id)changeRequestForStoriesSummaryInfo:(id)arg1;
+ (id)creationRequestWithStoriesSummaryInfo:(id)arg1;
+ (id)deletionRequestForStoriesSummaryInfo:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesSummaryInfo;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) _Bool customStoryCurrentUserCanPost; // @synthesize customStoryCurrentUserCanPost=_customStoryCurrentUserCanPost;
@property(copy, nonatomic) NSString *customStoryDisplayName; // @synthesize customStoryDisplayName=_customStoryDisplayName;
@property(copy, nonatomic) NSArray *customStoryPosterUsernames; // @synthesize customStoryPosterUsernames=_customStoryPosterUsernames;
@property(copy, nonatomic) NSString *customStoryPublicationId; // @synthesize customStoryPublicationId=_customStoryPublicationId;
@property(nonatomic) long long customStoryType; // @synthesize customStoryType=_customStoryType;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) _Bool hasUnviewedStories; // @synthesize hasUnviewedStories=_hasUnviewedStories;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithRowid:(long long)arg1 identifier:(id)arg2 type:(long long)arg3 thumbnail:(id)arg4 expirationDate:(double)arg5 numActiveStories:(long long)arg6 hasUnviewedStories:(_Bool)arg7 mostRecentStoryTimestamp:(double)arg8 mostRecentUnviewedTimestamp:(double)arg9 mostRecentViewedTimestamp:(double)arg10 mediaSummaries:(id)arg11 customStoryPublicationId:(id)arg12 customStoryType:(long long)arg13 customStoryDisplayName:(id)arg14 customStoryPosterUsernames:(id)arg15 customStoryCurrentUserCanPost:(_Bool)arg16 storyContentType:(long long)arg17;
@property(copy, nonatomic) NSArray *mediaSummaries; // @synthesize mediaSummaries=_mediaSummaries;
@property(nonatomic) double mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property(nonatomic) double mostRecentUnviewedTimestamp; // @synthesize mostRecentUnviewedTimestamp=_mostRecentUnviewedTimestamp;
@property(nonatomic) double mostRecentViewedTimestamp; // @synthesize mostRecentViewedTimestamp=_mostRecentViewedTimestamp;
@property(nonatomic) long long numActiveStories; // @synthesize numActiveStories=_numActiveStories;
@property(nonatomic) long long storyContentType; // @synthesize storyContentType=_storyContentType;
@property(copy, nonatomic) SCStoriesThumbnailMedia *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) long long type; // @synthesize type=_type;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

