/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardServices/SBSRemoteNotificationClient.h>

@interface SBSRemoteNotificationClient (SBSPreferences)
+ (unsigned int)_remoteNotificationServerPort;
+ (void)setEnabledNotificationTypes:(long long)arg1 forBundleIdentifier:(id)arg2;
+ (void)getSupportedTypes:(id *)arg1 enabledTypes:(id *)arg2;
+ (_Bool)hasRegisteredBundleIdentifiers;
+ (void)setSystemwideEnabled:(_Bool)arg1;
+ (_Bool)isSystemwideEnabled;
@end
