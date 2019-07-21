//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCPrivateStoriesSelectionPresenting;

@interface SCCustomStoriesServices : NSObject
{
    id <SCPrivateStoriesSelectionPresenting> _privateStoriesSelectionPresenter;
    SCLazy *_customStoriesDataMutator;
    SCLazy *_customStoriesDataFetcher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *customStoriesDataFetcher; // @synthesize customStoriesDataFetcher=_customStoriesDataFetcher;
@property(readonly, nonatomic) SCLazy *customStoriesDataMutator; // @synthesize customStoriesDataMutator=_customStoriesDataMutator;
- (id)initWithPrivateStoriesSelectionPresenter:(id)arg1 customStoriesDataMutator:(id)arg2 customStoriesDataFetcher:(id)arg3;
@property(readonly, nonatomic) id <SCPrivateStoriesSelectionPresenting> privateStoriesSelectionPresenter; // @synthesize privateStoriesSelectionPresenter=_privateStoriesSelectionPresenter;

@end
