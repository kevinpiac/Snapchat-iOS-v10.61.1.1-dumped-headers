//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCDiscoverFeedHeadlineViewLayoutConfiguration;

@interface SCDiscoverFeedWhiteSpaceHeadlineViewModel : NSObject <NSCopying>
{
    NSAttributedString *_title;
    SCDiscoverFeedHeadlineViewLayoutConfiguration *_headlineViewLayoutConfiguration;
    struct CGSize _maximumSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCDiscoverFeedHeadlineViewLayoutConfiguration *headlineViewLayoutConfiguration; // @synthesize headlineViewLayoutConfiguration=_headlineViewLayoutConfiguration;
- (id)initWithTitle:(id)arg1 maximumSize:(struct CGSize)arg2 headlineViewLayoutConfiguration:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

@end

