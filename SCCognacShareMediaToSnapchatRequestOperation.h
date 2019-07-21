//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class SCCognacOperaDataSource, SCCognacShareMediaToSnapchatRequestBody;
@protocol NavigationDelegate;

@interface SCCognacShareMediaToSnapchatRequestOperation : SCCognacWVJBRequestOperation
{
    SCCognacShareMediaToSnapchatRequestBody *_requestBody;
    id <NavigationDelegate> _deepLinkNavigationDelegate;
    SCCognacOperaDataSource *_dataSource;
}

- (void).cxx_destruct;
- (id)_generateDeeplinkAdditionalInfo;
- (_Bool)_validateState;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NavigationDelegate> deepLinkNavigationDelegate; // @synthesize deepLinkNavigationDelegate=_deepLinkNavigationDelegate;
- (void)run;

@end

