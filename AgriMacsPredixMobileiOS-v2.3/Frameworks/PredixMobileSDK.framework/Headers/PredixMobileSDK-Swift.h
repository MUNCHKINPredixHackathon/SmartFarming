// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#import <PredixMobileSDK/PredixMobileSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSURLRequest;
@class NSHTTPURLResponse;

SWIFT_PROTOCOL("_TtP15PredixMobileSDK15ServiceProtocol_")
@protocol ServiceProtocol
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
@optional
+ (void)registered;
+ (void)unregistered;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK10CDBService")
@interface CDBService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Enumeration for specifying location of configuration elements.
typedef SWIFT_ENUM(NSInteger, ConfigurationLocation) {

/// Configuration is stored in the Settings bundle
  ConfigurationLocationsettings = 0,
  ConfigurationLocationinfoplist = 1,
};


SWIFT_CLASS("_TtC15PredixMobileSDK19ConnectivityService")
@interface ConnectivityService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK9DBService")
@interface DBService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK14FullTextSearch")
@interface FullTextSearch : NSObject
+ (id _Nonnull (^ _Nonnull)(NSString * _Nonnull))createKey;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK10LogService")
@interface LogService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSCharacterSet (SWIFT_EXTENSION(PredixMobileSDK))
@end


@interface NSURLProtocol (SWIFT_EXTENSION(PredixMobileSDK))
@end


SWIFT_CLASS("_TtC15PredixMobileSDK13NotifyService")
@interface NotifyService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK14OpenURLService")
@interface OpenURLService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface PGSDKLogger (SWIFT_EXTENSION(PredixMobileSDK))
@end

@class NSURL;
enum WaitState : NSInteger;
@class WaitStateReturn;


/// Primary interface for the PredixMobileSDK to communicate with the UI. Used to display the main UI, and the Authentication UI Informs the UI when to display a native UI waiting component (spinner or progress bar) Provides communication channel for notifications (script execution)
SWIFT_PROTOCOL("_TtP15PredixMobileSDK23PredixAppWindowProtocol_")
@protocol PredixAppWindowProtocol

/// LoadURL will be called when the SDK wants the UI to display a new page, i.e. Predix Mobile WebApp. Prior to calling LoadURL, any attachments associated with with the webapp will be extracted. The parameters paramenter will be contents of the webapp document. OnComplete, if provided should be called when the display of the UI is completed. The URL will be the URL to load. In the case of a standard webapp, this will be the HTML file defined in the webapp defined in the "main" parameter of the webapp document.
- (void)loadURL:(NSURL * _Nonnull)url parameters:(NSDictionary * _Nullable)parameters onComplete:(void (^ _Nullable)(void))onComplete;

/// Informs the UI that the wait state should be updated, optionally displaying a message.
- (void)updateWaitState:(enum WaitState)state message:(NSString * _Nullable)message;

/// Returns the current wait state to the SDK on request. (This is the result of a GET request to /pmapi/window/spinner)
- (WaitStateReturn * _Nonnull)waitState;
@optional

/// Notifications coming from the SDK will be sent to the WebApp through this method. For webapps, the provided script should be executed via a command like "stringByEvaluatingJavaScriptFromString". The method is not usually implemented for native UI implementations.
- (void)receiveAppNotification:(NSString * _Nonnull)script;
@end



/// Static class of elements Predix Mobile SDK consumers can use to adjust to configure aspects of the SDK.
SWIFT_CLASS("_TtC15PredixMobileSDK27PredixMobilityConfiguration")
@interface PredixMobilityConfiguration : NSObject

/// Indicates the SDK will automatically listen for Application state events. Defaults to true. If false, the container application is expected to call PredixMobilityManager's application state methods such as applicationWillTerminate, applicationDidBecomeActive, etc.
+ (BOOL)automaticallyListenForApplicationStateEvents;
+ (void)setAutomaticallyListenForApplicationStateEvents:(BOOL)value;

/// Specifies the default logging level to be used if no logging level configuration is found.
+ (PGSDKLoggerLevelEnum)defaultLoggingLevel;
+ (void)setDefaultLoggingLevel:(PGSDKLoggerLevelEnum)value;

/// Specifies the default database name to use. This value is overridden by the user's information upon login, if a database name key is found within the user's information.
+ (NSString * _Nonnull)defaultDatabaseName;
+ (void)setDefaultDatabaseName:(NSString * _Nonnull)value;

/// Specifies the authentication scheme to watch for during login. During authentication the user will login via a web page, this web page is then expected to redirect to a URL, in the format of <authenticationScheme>://<authenticationGrantIndicator>
+ (NSString * _Nonnull)authenticationScheme;
+ (void)setAuthenticationScheme:(NSString * _Nonnull)value;

/// Specifies the authentication grant indicator hostname to watch for during login. During authentication the user will login via a web page, this web page is then expected to redirect to a URL, in the format of <authenticationScheme>://<authenticationGrantIndicator>
+ (NSString * _Nonnull)authenticationGrantIndicator;
+ (void)setAuthenticationGrantIndicator:(NSString * _Nonnull)value;

/// Specifies the configuration key (as in a key/value pair) used to determine the logging level in either the info.plist or the settings bundle root.plist
+ (NSString * _Nonnull)loggingLevelConfigKey;
+ (void)setLoggingLevelConfigKey:(NSString * _Nonnull)value;

/// Specifies where the logging level configuration key/value should be found.
+ (enum ConfigurationLocation)loggingLevelConfigLocation;
+ (void)setLoggingLevelConfigLocation:(enum ConfigurationLocation)value;

/// Specifies the configuration key (as in a key/value pair) used to determine the "Trace logging level logs all requests" value is in either the info.plist or the settings bundle root.plist
+ (NSString * _Nonnull)traceLogsRequestsConfigKey;
+ (void)setTraceLogsRequestsConfigKey:(NSString * _Nonnull)value;

/// Specifies where the "Trace logging level logs all requests" configuration key/value should be found.
+ (enum ConfigurationLocation)traceLogsRequestsConfigLocation;
+ (void)setTraceLogsRequestsConfigLocation:(enum ConfigurationLocation)value;

/// Specifies the configuration key (as in a key/value pair) used to determine the server endpoint hostname in either the info.plist or the settings bundle root.plist
+ (NSString * _Nonnull)serverEndpointConfigKey;
+ (void)setServerEndpointConfigKey:(NSString * _Nonnull)value;

/// Specifies where the "server endpoint hostname configuration key/value should be found.
+ (enum ConfigurationLocation)serverEndpointConfigLocation;
+ (void)setServerEndpointConfigLocation:(enum ConfigurationLocation)value;

/// The server path used to retreive user session information during the login process.
+ (NSString * _Nonnull)userSessionURLPath;
+ (void)setUserSessionURLPath:(NSString * _Nonnull)value;

/// The server path used to initialize the login process and display the login page.
+ (NSString * _Nonnull)loginURLPath;
+ (void)setLoginURLPath:(NSString * _Nonnull)value;

/// The server path used to log the user out and remove the current user session.
+ (NSString * _Nonnull)logoutURLPath;
+ (void)setLogoutURLPath:(NSString * _Nonnull)value;

/// The server path used to syncronize the local database.
+ (NSString * _Nonnull)dataReplicationURLPath;
+ (void)setDataReplicationURLPath:(NSString * _Nonnull)value;

/// The server path used to validate the user has a valid authenticated session.
+ (NSString * _Nonnull)authorizationCheckURLPath;
+ (void)setAuthorizationCheckURLPath:(NSString * _Nonnull)value;

/// The key in the response JSON from the userSessionURLPath call that specifies the user name value. This value is expected to be a string.
+ (NSString * _Nonnull)userSessionUsernameKey;
+ (void)setUserSessionUsernameKey:(NSString * _Nonnull)value;

/// The key in the response JSON from the userSessionURLPath call that specifies the authentication status value. This value is expected to be a boolean.
+ (NSString * _Nonnull)userSessionAuthenticatedKey;
+ (void)setUserSessionAuthenticatedKey:(NSString * _Nonnull)value;

/// The key in the response JSON from the userSessionURLPath call that specifies the database name value. This value is expected to be a string. If this property is nil, or not found in the user session information then defaultDatabaseName value is used for the database name.
+ (NSString * _Nullable)userSessionDatabaseNameKey;
+ (void)setUserSessionDatabaseNameKey:(NSString * _Nullable)value;

/// Specifies the configuration key used to determine the PM app name to load in either the info.plist or the settings bundle root.plist This value is the "name" field in the app.json document loaded into the database with the PM cli "define" command.
+ (NSString * _Nonnull)pmappDocumentNameKey;
+ (void)setPmappDocumentNameKey:(NSString * _Nonnull)value;

/// Specifies where the PM app name configuration key/value should be found.
+ (enum ConfigurationLocation)pmappDocumentNameConfigLocation;
+ (void)setPmappDocumentNameConfigLocation:(enum ConfigurationLocation)value;

/// Specifies the configuration key used to determine the PM app version to load in either the info.plist or the settings bundle root.plist This value is the "version" field in the app.json document loaded into the database with the PM cli "define" command.
+ (NSString * _Nonnull)pmappDocumentVersionKey;
+ (void)setPmappDocumentVersionKey:(NSString * _Nonnull)value;

/// Specifies where the PM app version configuration key/value should be found.
+ (enum ConfigurationLocation)pmappDocumentVersionConfigLocation;
+ (void)setPmappDocumentVersionConfigLocation:(enum ConfigurationLocation)value;

/// The key in the PM app document that determines the initial webapp to load into the container at startup.
+ (NSString * _Nonnull)pmAppDocumentWebAppNameKey;
+ (void)setPmAppDocumentWebAppNameKey:(NSString * _Nonnull)value;

/// The key in the PM app document that determines the offline authentication webapp to use during offline login.
+ (NSString * _Nonnull)pmAppDocumentOfflineAppNameKey;
+ (void)setPmAppDocumentOfflineAppNameKey:(NSString * _Nonnull)value;

/// The key in the PM app document that determines the available webapps array.
+ (NSString * _Nonnull)pmAppDocumentDependenciesKey;
+ (void)setPmAppDocumentDependenciesKey:(NSString * _Nonnull)value;

/// The hostname to be used for Predix Mobile SDK service calls.
+ (NSString * _Nonnull)API_HOST;
+ (void)setAPI_HOST:(NSString * _Nonnull)value;

/// The default error message used in the catastrophic error display that is shown to the user when no webapp can be loaded or the application cannot otherwise continue.
+ (NSString * _Nonnull)seriousErrorDefaultMessage;
+ (void)setSeriousErrorDefaultMessage:(NSString * _Nonnull)value;

/// The Bundled HTML filename used for the catastrophic error display that is shown to the user when no webapp can be loaded or the application cannot otherwise continue. If this file is not found a native UI alert message will be used.
+ (NSString * _Nonnull)seriousErrorPage;
+ (void)setSeriousErrorPage:(NSString * _Nonnull)value;

/// A closure that, if supplied, is run during the boot/restart service call. This can be used to perform additional container work that should be performed when the system is restarting.
+ (void (^ _Nullable)(void (^ _Nonnull onComplete)(void)))additionalBootRestartWorkflow;
+ (void)setAdditionalBootRestartWorkflow:(void (^ _Nullable)(void (^ _Nonnull onComplete)(void)))value;

/// An array of services that should be registered during the boot process.
+ (NSArray<Class <ServiceProtocol>> * _Nullable)additionalBootServicesToRegister;
+ (void)setAdditionalBootServicesToRegister:(NSArray<Class <ServiceProtocol>> * _Nullable)value;

/// Specifies the SDK will trap and log unhandled errors before the container crashes.
+ (BOOL)shouldLogUnhandledErrors;
+ (void)setShouldLogUnhandledErrors:(BOOL)value;

/// Specifies the SDK will automatically import default values from the Settings bundle
+ (BOOL)shouldInitializeDefaultsFromSettings;
+ (void)setShouldInitializeDefaultsFromSettings:(BOOL)value;
+ (BOOL)shouldIssueWarningsForPlaceholderURLs;
+ (void)setShouldIssueWarningsForPlaceholderURLs:(BOOL)value;

/// Specifies the SDK will require the device to have a passcode set to proceed during the Boot service startup process.
+ (BOOL)requireDevicePasscodeSet;
+ (void)setRequireDevicePasscodeSet:(BOOL)value;

/// Specifies the key to use in NSUserDefaults to determine if the server endpoint has changed. When the server endpoint changes, as detected via this key, all user data is wiped from the device.
+ (NSString * _Nonnull)defaultInitializationDetectionKey;
+ (void)setDefaultInitializationDetectionKey:(NSString * _Nonnull)value;

/// Specifies the default to indicate a watcher will log all networks requests for the app.
+ (BOOL)traceLogsAllRequestsDefault;
+ (void)setTraceLogsAllRequestsDefault:(BOOL)value;

/// Specifies an app-specific data that should be included when the device registers for push notificiations.
+ (NSDictionary<NSString *, id> * _Nullable)remoteNotificationRegistrationAdditionalInfo;
+ (void)setRemoteNotificationRegistrationAdditionalInfo:(NSDictionary<NSString *, id> * _Nullable)value;

/// the format of the document id to use when registering for push notifications.
+ (NSString * _Nonnull)remoteNotificationRegistrationDocumentId;
+ (void)setRemoteNotificationRegistrationDocumentId:(NSString * _Nonnull)value;

/// the document type used for the push notification registratino document.
+ (NSString * _Nonnull)remoteNotificationRegistrationDocumentType;
+ (void)setRemoteNotificationRegistrationDocumentType:(NSString * _Nonnull)value;

/// Optional settings used to tweak the behavior of push (client to server) data replication
+ (NSDictionary<NSString *, id> * _Nullable)replicationAdditionalPushSettings;
+ (void)setReplicationAdditionalPushSettings:(NSDictionary<NSString *, id> * _Nullable)value;

/// Optional settings used to tweak the behavior of pull (server to client) data replication
+ (NSDictionary<NSString *, id> * _Nullable)replicationAdditionalPullSettings;
+ (void)setReplicationAdditionalPullSettings:(NSDictionary<NSString *, id> * _Nullable)value;

/// Optional keychain access group. If provided this group will be used for all keychain access.
+ (NSString * _Nullable)keychainAccessGroup;
+ (void)setKeychainAccessGroup:(NSString * _Nullable)value;

/// Specifies the prefix to use for keychain storage keys.
+ (NSString * _Nonnull)keychainKeyPrefix;
+ (void)setKeychainKeyPrefix:(NSString * _Nonnull)value;

/// provides a short string of version information of the running app, the Predix Mobile SDK, and some of its dependent components.
+ (NSString * _Nonnull)versionInfo;

/// Specifies that when the SDK detects the ApplicationDidBecomeActive application state, the SDK can start interacting with the UI immediately. If the consuming app want finer control over when the UI is ready for SDK interaction, it can set this flag to false, and manually post the UIReadyNotification to inform the SDK when the UI is ready for interaction.
+ (BOOL)considerUIReadyWhenApplicationDidBecomeActive;
+ (void)setConsiderUIReadyWhenApplicationDidBecomeActive:(BOOL)value;

/// This closure allows the implementation of the non-web based serious error pages to be overridden. In iOS the default implemenation shows a UIAlertController with the error details. In the macOS version of the SDK there is no default implmentation. MacOS containers must include a web-based serious error page, or should implement this closure.
+ (void (^ _Nonnull)(NSString * _Nonnull errorMessage, void (^ _Nonnull onRetry)(void)))displaySeriousErrorPopup;
+ (void)setDisplaySeriousErrorPopup:(void (^ _Nonnull)(NSString * _Nonnull errorMessage, void (^ _Nonnull onRetry)(void)))value;

/// File system URL under which the SDK uses for all application storage.
+ (NSURL * _Nonnull)localStorageURL;

/// File system URL under which the SDK uses for all application storage for the current logged in user. Not valid until after authentication completes.
+ (NSURL * _Nullable)userLocalStorageURL;

/// Tells the SDK to initialize, load configuration from settings, prepare the logging system, and prepare the SDK for startup. If not called by the time PredixMobilityManager.startApp is called, it will be called at that time.
+ (void)loadConfiguration;

/// Helper method takes a view name and version, and map function closure, creates a ViewDefinition and adds it to the dataViewDefinitions property.
+ (void)appendDataViewDefinition:(NSString * _Nonnull)viewName version:(NSString * _Nonnull)version mapFunction:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull properties, void (^ _Nonnull emit)(id _Nonnull, id _Nullable)))mapFunction;

/// Helper method takes a view name and version, and map function closure, and reduce function closure, creates a ViewDefinition and adds it to the dataViewDefinitions property.
+ (void)appendDataViewDefinition:(NSString * _Nonnull)viewName version:(NSString * _Nonnull)version mapFunction:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull properties, void (^ _Nonnull emit)(id _Nonnull, id _Nullable)))mapFunction reduceFunction:(id _Nonnull (^ _Nullable)(NSArray * _Nonnull keys, NSArray * _Nonnull values, BOOL re))reduceFunction;

/// returns a dictionary containing version information of the app, the SDK, and dependent components, as well as some basic environmental information for the current device.
+ (NSDictionary<NSString *, NSString *> * _Nonnull)getVersionInfo;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNotification;
@class UIApplication;
@class NSData;
@class NSError;
@class UILocalNotification;

SWIFT_CLASS("_TtC15PredixMobileSDK21PredixMobilityManager")
@interface PredixMobilityManager : NSObject
+ (PredixMobilityManager * _Nonnull)sharedInstance;
@property (nonatomic, strong) id <PredixAppWindowProtocol> _Nonnull packageWindow;
@property (nonatomic, copy) id <PredixAppWindowProtocol> _Nonnull (^ _Nonnull presentAuthentication)(id <PredixAppWindowProtocol> _Nonnull packageWindow);
@property (nonatomic, copy) void (^ _Nonnull dismissAuthentication)(id <PredixAppWindowProtocol> _Nonnull authenticationWindow);
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nullable localOrRemoteNotifications;
@property (nonatomic, readonly) BOOL isShowingAuthentication;
@property (nonatomic, readonly, strong) id <PredixAppWindowProtocol> _Nonnull currentWindow;
- (nonnull instancetype)initWithPackageWindow:(id <PredixAppWindowProtocol> _Nonnull)packageWindow presentAuthentication:(id <PredixAppWindowProtocol> _Nonnull (^ _Nonnull)(id <PredixAppWindowProtocol> _Nonnull packageWindow))presentAuthentication dismissAuthentication:(void (^ _Nonnull)(id <PredixAppWindowProtocol> _Nonnull authenticationWindow))dismissAuthentication OBJC_DESIGNATED_INITIALIZER;
- (void)showAuthentication:(NSURL * _Nonnull)url onComplete:(void (^ _Nullable)(void))onComplete;
- (void)showAuthentication:(NSURL * _Nonnull)url parameters:(NSDictionary * _Nullable)parameters onComplete:(void (^ _Nullable)(void))onComplete;
- (void)authenticationComplete;
- (void)showPackageWindow:(NSURL * _Nonnull)url parameters:(NSDictionary * _Nullable)parameters onComplete:(void (^ _Nullable)(void))onComplete;
- (void)startApp;
- (void)callBootService;
- (void)ShowUserError:(NSString * _Nonnull)msg;
- (void)addTranslationForNotification:(NSString * _Nonnull)originalNotificationName asNotificationName:(NSString * _Nonnull)asNotificationName translation:(NSDictionary<NSString *, id> * _Nullable (^ _Nonnull)(NSNotification * _Nonnull))translation;
- (void)removeTranslationForNotificationName:(NSString * _Nonnull)notificationName;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (void)application:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
- (void)application:(UIApplication * _Nonnull)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (void)application:(UIApplication * _Nonnull)application didFailToRegisterForRemoteNotificationsWithError:(NSError * _Nonnull)error;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)application:(UIApplication * _Nonnull)application didReceiveLocalNotification:(UILocalNotification * _Nonnull)notification;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK25ReachabilityStatusWrapper")
@interface ReachabilityStatusWrapper : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end



SWIFT_PROTOCOL("_TtP15PredixMobileSDK21ServiceRouterProtocol_")
@protocol ServiceRouterProtocol
- (BOOL)registerService:(Class <ServiceProtocol> _Nonnull)service;
- (void)unregisterService:(Class <ServiceProtocol> _Nonnull)service;
- (void)processRequest:(NSURLRequest * _Nonnull)request responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
- (void)processRequestWithServiceId:(NSString * _Nonnull)serviceId responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
- (void)processRequest:(NSString * _Nonnull)serviceId extraPath:(NSString * _Nullable)extraPath responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
- (void)processRequest:(NSString * _Nonnull)serviceId extraPath:(NSString * _Nullable)extraPath method:(NSString * _Nonnull)method data:(NSData * _Nullable)data responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK13ServiceRouter")
@interface ServiceRouter : NSObject <ServiceRouterProtocol>
+ (id <ServiceRouterProtocol> _Nonnull)sharedInstance;
- (BOOL)registerService:(Class <ServiceProtocol> _Nonnull)service;
- (void)unregisterService:(Class <ServiceProtocol> _Nonnull)service;
- (void)unregisterServiceByIdentifier:(NSString * _Nonnull)serviceId;
- (void)processRequestWithServiceId:(NSString * _Nonnull)serviceId responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
- (void)processRequest:(NSString * _Nonnull)serviceId extraPath:(NSString * _Nullable)extraPath responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
- (void)processRequest:(NSString * _Nonnull)serviceId extraPath:(NSString * _Nullable)extraPath method:(NSString * _Nonnull)method data:(NSData * _Nullable)data responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
- (void)processRequest:(NSURLRequest * _Nonnull)request responseBlock:(responseReturnBlock _Nonnull)responseBlock dataBlock:(dataReturnBlock _Nonnull)dataBlock completionBlock:(requestCompleteBlock _Nonnull)completionBlock;
@end



SWIFT_CLASS("_TtC15PredixMobileSDK11UserService")
@interface UserService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15PredixMobileSDK19UserSettingsService")
@interface UserSettingsService : NSObject <ServiceProtocol>
+ (NSString * _Nonnull)serviceIdentifier;
+ (void)performRequest:(NSURLRequest * _Nonnull)request response:(NSHTTPURLResponse * _Nonnull)response responseReturn:(responseReturnBlock _Nonnull)responseReturn dataReturn:(dataReturnBlock _Nonnull)dataReturn requestComplete:(requestCompleteBlock _Nonnull)requestComplete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Possible Wait states, either the spinner/progress bar is showing (Waiting), or not showing (NotWaiting).
typedef SWIFT_ENUM(NSInteger, WaitState) {

/// Spinner or other indicator is displayed while user is waiting for a long-running task
  WaitStateWaiting = 0,

/// No spinner is being displayed, user is not waiting
  WaitStateNotWaiting = 1,
};



/// Wrapper object used for returning the wait state of the UI. Encapsulates both the WaitState enumeration, and the optional string message.
SWIFT_CLASS("_TtC15PredixMobileSDK15WaitStateReturn")
@interface WaitStateReturn : NSObject
- (nonnull instancetype)initWithState:(enum WaitState)state message:(NSString * _Nullable)message OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init:(enum WaitState)state :(NSString * _Nullable)message OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithState:(enum WaitState)state OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init:(enum WaitState)state OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop