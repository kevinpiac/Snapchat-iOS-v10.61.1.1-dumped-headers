//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString, SCStoriesPostingConfiguration;

@protocol SCGallerySendConfiguration <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *additionalText;
@property(readonly, copy, nonatomic) NSArray *businessIds;
@property(readonly, copy, nonatomic) NSArray *mischiefs;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames;
@property(readonly, copy, nonatomic) SCStoriesPostingConfiguration *storiesConfiguration;
@end

