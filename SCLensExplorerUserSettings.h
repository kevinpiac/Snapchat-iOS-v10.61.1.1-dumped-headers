//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPreferences;
@protocol SCLensExplorerStudySettingsProviderProtocol;

@interface SCLensExplorerUserSettings : NSObject
{
    SCPreferences *_userPreferences;
    id <SCLensExplorerStudySettingsProviderProtocol> _studySettingsProvider;
}

- (void).cxx_destruct;
- (id)initWithUserPreferences:(id)arg1 studySettingsProvider:(id)arg2;
- (void)setSeenSubscribeTooltip;
- (_Bool)shouldSeeSubscribeTooltip;
@property(readonly, nonatomic) id <SCLensExplorerStudySettingsProviderProtocol> studySettingsProvider; // @synthesize studySettingsProvider=_studySettingsProvider;

@end

